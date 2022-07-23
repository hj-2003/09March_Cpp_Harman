#include <iostream>
using namespace std;

class Numbers
{
    int a, b;

public:
    friend void swap_Num(Numbers &);

    void set_Num()
    {
        cout << "Enter two numbers" << endl;
        cin >> a >> b;
    }

    void display_Num()
    {
        cout << "A is " << a << endl;

        cout << "B is " << b << endl;
    }
};

void swap_Num(Numbers &obj)
{
    obj.a = obj.a + obj.b;
    obj.b = obj.a - obj.b;
    obj.a = obj.a - obj.b;
}

int main()
{

    Numbers obj1;
    obj1.set_Num();
    cout << "Before swapping numbers original values are: " << endl;
    obj1.display_Num();
    cout << "After swapping numbers values are: " << endl;
    swap_Num(obj1);
    obj1.display_Num();

    return 0;
}