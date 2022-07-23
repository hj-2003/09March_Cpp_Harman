#include <iostream>
using namespace std;

class MatrixAdd
{
    int my_Matrix[10];

public:
    MatrixAdd operator+(MatrixAdd &obj)
    {
        MatrixAdd tmp;
        for (int i = 0; i < 10; i++)
        {
            tmp.my_Matrix[i] = my_Matrix[i] + obj.my_Matrix[i];
        }

        return tmp;
    }

    void set_MX()
    {
        cout << endl
             << "MATRIX:" << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << "Enter number " << i + 1 << " : " << endl;
            cin >> my_Matrix[i];
        }
    }

    void display()
    {
        cout << endl
             << "Addition of the two matrices are: " << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << my_Matrix[i] << endl;
        }
    }
};

int main()
{

    MatrixAdd obj1, obj2, obj3;
    obj1.set_MX();
    obj2.set_MX();
    obj3 = obj1 + obj2;

    obj3.display();

    return 0;
}