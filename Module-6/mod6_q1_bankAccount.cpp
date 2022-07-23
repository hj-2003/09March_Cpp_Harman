#include <iostream>
using namespace std;

class Bank_Account_Transaction
{
    char name[52];
    static int ac_no;
    string ac_type;
    float balance = 0;

public:
    void set_details()
    {
        ac_no++;
        fflush(stdin);
        cout << "\nEnter your name: ";
        gets(name);
        cout << "\nYour account number is : ";
        cout << ac_no;
        fflush(stdin);
        cout << "\n\nEnter your account type: ";
        cin >> ac_type;
        fflush(stdin);
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

    void info()
    {
        cout << "\nNAME: " << name << endl;
        cout << "BALANCE: " << balance << endl
             << endl;
    }
};

int Bank_Account_Transaction ::ac_no = 1000;

int main()
{
    int i = 0;

    cout << "\n<------------------- BANKING DETAILS ------------------->" << endl;

    Bank_Account_Transaction obj[25];
    obj[0].set_details();
    obj[0].deposit();
    obj[0].withdraw();
    obj[0].info();

    cout << "\nDo you want to enter more data?\n(Type y for yes or else request will be terminated...) ";
    string ans;
    cin >> ans;

    while (ans == "y")
    {
        i++;
        if (i == 50)
        {
            cout << "\nYou cannot enter details more than 50 times!\n";
            break;
        }
        cout << "\n<------------------- BANKING DETAILS ------------------->" << endl;
        obj[i].set_details();
        obj[i].deposit();
        obj[i].withdraw();
        obj[i].info();
        cout << "\nDo you want to enter more data?\n(Type y for yes or else request will be terminated...) ";
        cin >> ans;
    }

    cout << "\nTHANK YOU CUSTOMER!";

    return 0;
}