#include <iostream>
using namespace std;

template <class T>
void swapNum(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x, y;
    cout << "Enter two numbers -->" << endl;
    cin >> x >> y;
    cout << "Numbers before swapping are X = " << x << " and Y = " << y << endl;
    swapNum<int>(x, y);
    cout << "Numbers after swapping are X = " << x << " and Y = " << y << endl;

    //<========== FOR STRING =============>

    // string x, y;
    // cout << "Enter string -->" << endl;
    // getline(cin,x);
    // cout << "Enter string -->" << endl;
    // getline(cin,y);
    // cout << "Numbers before swapping are X = " << x << " and Y = " << y << endl;
    // swapNum<string>(x, y);
    // cout << "Numbers after swapping are X = " << x << " and Y = " << y << endl;

    return 0;
}