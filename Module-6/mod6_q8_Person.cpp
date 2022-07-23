#include <iostream>
#include <cstdio>
using namespace std;

class Person
{
    char name[52]="NA";
    int age=0;

public:
    void set_P()
    {
        fflush(stdin);
        cout << "Enter name: ";
        gets(name);
        cout << "Enter age: ";
        cin >> age;
        fflush(stdin);
    }

    void display_P()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
    float percentage=0;

public:
    void set_S()
    {
        cout << "Enter the percentage of student: ";
        cin >> percentage;
        while ((percentage > 100) || (percentage < 0))
        {
            cout << "Invalid!" << endl;
            cout << "Enter the percentage of student: ";
            cin >> percentage;
        }
    }

    void display_S()
    {
        cout << "Percentage: " << percentage << endl;
    }
};

class Teacher : public Person
{
    float salary=0;

public:
    void set_T()
    {
        cout << "Enter the salary of teacher: ";
        cin >> salary;
    }

    void display_T()
    {
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Student obj[50];
    Teacher obj1[50];

    int i;

    for (i = 0; i < 50; i++)
    {
        cout<<"\n<------------------------ MANAGEMENT SYSTEM ------------------------->\n";

        cout << "Enter the data of student -->" << endl;
        obj[i].set_P();
        obj[i].set_S();

        cout << endl
             << "Enter the data of teacher -->" << endl;
        obj1[i].set_P();
        obj1[i].set_T();

        cout<<"\nDo you want to enter another data? \n(TYPE 'no' if you don't want) ";
        string ans;
        cin>>ans;
        if((ans == "No")||(ans == "no")||(ans == "NO"))
        {
            break;
        }

    }

    for (int j = 0; j <= i; j++)
    {
        cout<<"\n<============= DETAILS ==================>\n";
        cout << endl
             << "Student Details" << endl;
        obj[j].display_P();
        obj[j].display_S();

        cout << endl
             << "Teachers Details" << endl;
        obj1[j].display_P();
        obj1[j].display_T();
    }
    
    
    return 0;
}