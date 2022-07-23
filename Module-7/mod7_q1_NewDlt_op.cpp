#include <iostream>
using namespace std;

class Employee
{
    int id, age, salary;
    string name, job_description;

public:
    void set_details()
    {
        cout << "\n<---------------------- EMPLOYEE DETAILS -------------------------->" << endl;
        cout << "Enter Employee ID: ";
        cin >> id;
        fflush(stdin);
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Salary: ";
        cin >> salary;
        fflush(stdin);
        cout << "Enter Job Description: ";
        getline(cin, job_description);
    }

    void get_details()
    {
        cout << "\n<---------------------- ENTERED DETAILS -------------------------->" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
        cout << "Job Description: " << job_description << endl;
    }
};

int main()
{

    Employee *ptr;
    ptr = new Employee;
    ptr->set_details();
    ptr->get_details();
    delete ptr;
    return 0;
}