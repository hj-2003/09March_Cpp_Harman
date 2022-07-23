#include <iostream>
#include <cstring>
using namespace std;

class ConStr
{
    string s1;

public:
    void set_str()
    {
        cout << "Enter string: - ";
        cin >> s1;
        fflush(stdin);
    }

    void display_str()
    {
        cout << "Concated string is " << s1 << "." << endl;
    }

    ConStr operator+(ConStr &s2)
    {
        ConStr s;
        s.s1 = s1.append(s2.s1);
        return s;
    }
};

int main()
{

    ConStr s, s1, s2;
    s.set_str();
    s1.set_str();
    s2 = s + s1;
    s2.display_str();

    return 0;
}