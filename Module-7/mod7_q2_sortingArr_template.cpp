#include <iostream>
using namespace std;

template <class S>

class Sort_Array
{
    S arr[10];

public:
    void set_arr()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "Enter " << i + 1 << " element of array: ";
            cin >> arr[i];
        }
    }

    void sort_arr()
    {
        for (int i = 0; i < 9; i++)
        {
            for (int i = 0; i < 9; i++)
            {
                if (arr[i + 1] > arr[i])
                {
                    arr[i + 1] = arr[i] + arr[i + 1];
                    arr[i] = arr[i + 1] - arr[i];
                    arr[i + 1] = arr[i + 1] - arr[i];
                }
            }
        }
    }

    void display_arr()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    Sort_Array<int> obj;
    obj.set_arr();
    cout << "\nArray is -->" << endl;
    obj.display_arr();
    cout << "\nArray after sorting is -->" << endl;
    obj.sort_arr();
    obj.display_arr();
    return 0;
}