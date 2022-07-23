#include <iostream>
using namespace std;

class lec_details
{
    string lecturer = "NA";
    string subject = "NA";
    string course = "NA";
    int no_lectures = 0;

public:
    void set_Details()
    {
        cout << "\n<------------------------- LECTURE DETAILS ----------------------->" << endl;
        cout << "Enter name of the lecturer: ";
        cin >> lecturer;
        fflush(stdin);
        cout << "Enter name of the subject: ";
        cin >> subject;
        fflush(stdin);
        cout << "Enter name of the course: ";
        cin >> course;
        fflush(stdin);
        cout << "Enter number of the lectures: ";
        cin >> no_lectures;
        fflush(stdin);
    }

    void display_Details()
    {
        cout << "\n<------------------------- DETAILS ----------------------->" << endl;
        cout << "\nLecturer: " << lecturer << endl;
        cout << "Subject: " << subject << endl;
        cout << "Course: " << course << endl;
        cout << "Number of the lectures: " << no_lectures << endl;
    }
};

int main()
{
    lec_details obj[25];
    obj[0].set_Details();
    cout << "\nDo you want to add lecture details (type yes to add): ";
    string ans;
    cin >> ans;
    int i = 0;
    if (ans == "yes")
    {
        for (i = 1; i < 25; i++)
        {
            fflush(stdin);
            obj[i].set_Details();
            cout << "\nDo you want to add lecture details: ";
            cin >> ans;
            if (ans == "no")
            {
                cout << "OKAY" << endl;
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
        obj[j].display_Details();
    }

    return 0;
}