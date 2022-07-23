#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream obj;
    obj.open("mod6_q12.txt");
    string str;
    cout<<"Data from file:-\n";
    while (obj.eof()==0)
    {
        getline(obj, str);
        cout<<str<<endl;
    }
    obj.close();

    ofstream obj1;
    obj1.open("mod6_q12.txt");
    string str1;
    cout<<"\nEnter a string: - ";
    getline(cin, str1);
    obj1<<str1;
    cout<<"Enter another string: - ";
    getline(cin, str1);
    obj1<<"\n"<<str1;
    obj1.close();

    return 0;
}