#include <iostream>
#include <cstring>
using namespace std;

class Account
{

protected:
    char name[52];
    static int ac_no;
    float balance = 0;

public:
    string ac_type;
    

    void set_details()
    {
    	ac_no++;
        fflush(stdin);
        cout << "\nEnter your name: ";
        gets(name);
        cout << "\nYour account number is : ";
        cout << ac_no;
        cout << "\nYour account type is : ";
        cout << ac_type << endl;
    }

    void info()
    {
        cout << "\n<--------------------- CUSTOMER DETAILS ----------------------->" << endl;
        cout << "\nNAME: " << name << endl;
        cout << "BALANCE: " << balance << endl;
    }
};

int Account ::ac_no = 1000;

class sav_acct : public Account
{

protected:
    bool cheque_book = false;

public:
    void activate_ChqBook()
    {
        string ans;
        cout << "\nDo you want cheque book (type yes if you want): ";
        cin >> ans;
        if (ans == "yes")
        {
            cheque_book = true;
        }
        else
        {
            cout << "Cheque book not initiated." << endl;
        }
    }

    void chqbk_status()
    {
        if (cheque_book == true)
        {
            cout << "Your cheque book has been activated." << endl;
            cout << "\n THANK YOU CUSTOMER!" << endl;
        }
        else
        {
            cout << "Your cheque book has not been activated." << endl;
            cout << "\n THANK YOU CUSTOMER!" << endl;
        }
    }

    void Interest()
    {
        float time;
        cout << "\nEnter time to apply interest: ";
        cin >> time;
        float rate = (5.0 / 100);
        balance = balance + (balance * rate * time) / 100;
    }

    void deposit()
    {
        char ans;
        cout << endl
             << "Welcome " << name << "!" << endl;
        cout << "\nDo you want to deposit money?(y/n) ";
        cin >> ans;
        if (ans == 'y')
        {
            fflush(stdin);
            float amt;
            cout << "Enter your amount to deposit: ";
            cin >> amt;
            balance = balance + amt;
            cout << "Successfully deposited!" << endl;
        }
        else if (ans == 'n')
        {
            cout << "OKAY" << endl;
        }
        else
        {
            cout << "Invalid!" << endl;
        }
        fflush(stdin);
    }

    void withdraw()
    {
        char ans;
        cout << "\nDo you want to withdraw money?(y/n)";
        cin >> ans;
        if (ans == 'y')
        {
            fflush(stdin);
            float wdraw;
            cout << "Enter your amount to withdraw: ";
            cin >> wdraw;
            if (wdraw <= balance)
            {
                balance = balance - wdraw;
                cout << "Successfully withdrawed!" << endl;
            }
            else
            {
                cout << "Insufficient balance!";
            }
        }
        else if (ans == 'n')
        {
            cout << "OKAY" << endl;
        }
        else
        {
            cout << "Invalid!" << endl;
        }
        fflush(stdin);
    }
};

class curr_acc : public Account
{

public:
    void check_balance()
    {
        if (balance < 1500)
        {
            cout << "Due to low balance, you are imposed penalty of Rs. 100" << endl;
            cout << "Please deposit this amount to your nearest bank branch to avoid any inconvinence." << endl;
        }
        else
        {
            cout << "\n THANK YOU CUSTOMER!" << endl;
        }
    }

    void Interest()
    {
        float time;
        cout << "\nEnter time to apply interest: ";
        cin >> time;
        float rate = (10.0 / 100);
        balance = balance + (balance * rate * time) / 100;
    }

    void deposit()
    {
        char ans;
        cout << endl
             << "Welcome " << name << "!" << endl;
        cout << "\nDo you want to deposit money?(y/n) ";
        cin >> ans;
        if (ans == 'y')
        {
            fflush(stdin);
            float amt;
            cout << "Enter your amount to deposit: ";
            cin >> amt;
            balance = balance + amt;
            cout << "Successfully deposited!" << endl;
        }
        else if (ans == 'n')
        {
            cout << "OKAY" << endl;
        }
        else
        {
            cout << "Invalid!" << endl;
        }
        fflush(stdin);
    }

    void withdraw()
    {
        char ans;
        cout << "\nDo you want to withdraw money?(y/n)";
        cin >> ans;
        if (ans == 'y')
        {
            fflush(stdin);
            float wdraw;
            cout << "Enter your amount to withdraw: ";
            cin >> wdraw;
            if (wdraw <= balance)
            {
                balance = balance - wdraw;
                cout << "Successfully withdrawed!" << endl;
            }
            else
            {
                cout << "Insufficient balance!";
            }
        }
        else if (ans == 'n')
        {
            cout << "OKAY" << endl;
        }
        else
        {
            cout << "Invalid!" << endl;
        }
        fflush(stdin);
    }
};

int main()
{
    char ac_type[20];
    cout << "\n<--------------------------- BANKING SYSTEM ---------------------------->" << endl;
    cout << "\n\nEnter your account type\n(Type in small case, default account will be Savings if not typed correctly): ";
    cin >> ac_type;
    fflush(stdin);
    if ((strcmp(ac_type, "current") == 0) || (strcmp(ac_type, "Current") == 0))
    {
        curr_acc obj;
        obj.ac_type = "Current";
        obj.set_details();
        obj.deposit();
        obj.Interest();
        obj.withdraw();
        obj.info();
        obj.check_balance();
    }
    else
    {
        sav_acct obj;
        obj.ac_type = "Savings";
        obj.set_details();
        obj.activate_ChqBook();
        obj.deposit();
        obj.Interest();
        obj.withdraw();
        obj.info();
        obj.chqbk_status();
    }

    return 0;
}
