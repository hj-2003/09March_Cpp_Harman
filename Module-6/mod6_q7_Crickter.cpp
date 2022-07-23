#include <iostream>
using namespace std;

class Cricketer
{
    char name[52];
    int age;

public:
    void set_Cricketer()
    {
        cout << "\n<------------------------ CRICKETER DETAILS ------------------------->" << endl;
        fflush(stdin);
        cout << "Enter name: ";
        gets(name);
        cout << "Enter age: ";
        cin >> age;
    }

    void display_Cricketer()
    {
        cout << "\n<------------------------ DETAILS ------------------------->" << endl;
        cout << endl
             << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Batsman : public Cricketer
{

    int matches;
    int total_runs = 0;
    float average_runs = 0;
    int best_performance = 0;

public:
    void input_Runs()
    {
        fflush(stdin);
        int num;
        cout << "Enter number of matches you want to enter runs: ";
        cin >> num;
        matches = num;
        while (num--)
        {
            int run;
            cout << "Enter runs: ";
            cin >> run;
            if (best_performance < run)
            {
                best_performance = run;
            }
            total_runs += run;
        }
    }

    void calc_Avg()
    {
        average_runs = total_runs / matches;
    }

    void display_Batsman()
    {
        cout << "Total runs: " << total_runs << endl;
        cout << "Average runs: " << average_runs << endl;
        cout << "Best performance: " << best_performance << endl;
    }
};

int main()
{

    Batsman obj[25];
    obj[0].set_Cricketer();
    obj[0].input_Runs();
    obj[0].calc_Avg();
    cout << "\nDo you want to add cricketer details (type yes to add): ";
    string ans;
    cin >> ans;
    int i = 0;
    if (ans == "yes")
    {
        for (i = 1; i < 25; i++)
        {
            if (i == 25)
            {
                cout << "\nYou cannot enter details more than 25 times!\n";
                break;
            }
            fflush(stdin);
            obj[i].set_Cricketer();
            obj[i].input_Runs();
            obj[i].calc_Avg();
            cout << "\nDo you want to add another cricketer's details (TYPE 'no' if you don't want it): ";
            cin >> ans;
            if (ans == "no")
            {
                break;
            }
        }
    }
    else if (ans == "no")
    {
        cout << "OKAY" << endl;
    }
    else
    {
        cout << "Invalid!" << endl;
    }

    for (int j = 0; j <= i; j++)
    {
        obj[j].display_Cricketer();
        obj[j].display_Batsman();
    }

    return 0;
}