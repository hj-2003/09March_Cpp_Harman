#include <iostream>
#include <cstring>
using namespace std;

class Bank
{
protected:
    char name[52];
    int age;
    float balance;

public:
    void set_Details()
    {
        fflush(stdin);
        cout << "\nEnter name: ";
        gets(name);
        cout << "Enter age: ";
        cin >> age;
    }

    void display_Details()
    {
        cout << "\n<===================== YOUR DETAILS =======================>\n";
        cout << endl
             << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Saving_Ac : public Bank
{

    string ac_type = "Savings";

public:
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

    void simple_interest()
    {
        if (balance > 0)
        {
            float yrs;
            cout << "\n\nEnter time in years to claim interest: ";
            cin >> yrs;
            balance = balance + (balance * 2.5 * yrs) / 100;
        }
        else
        {
            cout << "\nInterest cannot be applied!\n";
        }
    }
};

class Current_Ac : public Bank
{
    bool cheque_book = false;
    string ac_type = "Current";

public:
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

    void check_balance()
    {
        if (balance < 1500)
        {
            cout << "Due to low balance, you are imposed service charge of Rs. 100" << endl;
            cout << "Please deposit this amount to your nearest bank branch to avoid any inconvinence." << endl;
        }
    }

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
            cout << "\nYour cheque book has been activated.\n"
                 << endl;
        }
        else
        {
            cout << "\nYour cheque book has not been activated.\n"
                 << endl;
        }
    }
};

int main()
{
    char ac_type[20];
    cout << "\n<--------------------------- BANKING SYSTEM ---------------------------->" << endl;
    cout << "\n\nEnter your account type\n(savings or current)\n(Type in small case, default account will be Savings if not typed correctly): ";
    cin >> ac_type;
    fflush(stdin);
    if ((strcmp(ac_type, "current") == 0) || (strcmp(ac_type, "Current") == 0))
    {
        Current_Ac obj;

        obj.set_Details();
        obj.deposit();
        obj.withdraw();
        obj.activate_ChqBook();

        obj.display_Details();
        cout << "\nYour account type is : Current Account.\n";
        obj.chqbk_status();
        obj.check_balance();
        cout << "\n THANK YOU CUSTOMER!";
    }
    else
    {
        Saving_Ac obj;

        obj.set_Details();
        obj.deposit();
        obj.withdraw();
        obj.simple_interest();

        obj.display_Details();
        cout << "\nYour account type is : Savings Account.\n";
        cout << "\n THANK YOU CUSTOMER!";
    }
    return 0;
}
