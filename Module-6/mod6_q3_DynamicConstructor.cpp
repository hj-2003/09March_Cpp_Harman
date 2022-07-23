#include <iostream>
using namespace std;

class Interest
{

    float sinterest;

    public:
        Interest(float principal, float year, float rate)
        {
            float* p = new float;
            float* y = new float;
            float* r = new float;
            *p = principal;
            *y = year;
            *r = rate;
            sinterest = ((*p) * (*r) * (*y))/100;
            delete p;
            delete y;
            delete r;
        }

        Interest(int principal, int year, float rate = 2.5)
        {
            float* p = new float;
            float* y = new float;
            *p = principal;
            *y = year;
            sinterest = ((*p)*(*y)*(rate))/100;
            delete p;
            delete y;
        }

        void display(){
            cout<<"The simple interest is "<<sinterest<<endl;
        }

};

int main(){
    
    float amt,rate,yr;
    cout<<"\n<-------- SIMPLE INTEREST ---------->\n"<<endl;
    cout<<"Enter the principal amount:- ";
    cin>>amt;
    cout<<"Enter years:- ";
    cin>>yr;
    cout<<"The interest rate:- ";
    cin>>rate;
    

    Interest*ptr;
    ptr = new Interest(amt,yr,rate);
    ptr->display();
    delete ptr;

    cout<<"\n<-------- SIMPLE INTEREST ---------->\n"<<endl;
    cout<<"Enter the principal amount:- ";
    cin>>amt;
    cout<<"Enter years:- ";
    cin>>yr;
    Interest*ptr2 = new Interest(amt,yr);
    ptr2->display();
    delete ptr2;

    return 0;
}