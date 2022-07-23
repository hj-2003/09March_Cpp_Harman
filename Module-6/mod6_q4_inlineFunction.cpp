#include <iostream>
using namespace std;

inline float multiplication_Values(float a, float b){
    return a * b;
}

inline float cubes(float a){
    return a*a*a;
}

int main(){
    cout<<"\n<----------------- CUBES AND MULTIPLY -------------------->\n\n";
    float x=0,y=0;
    cout<<"Enter two numbers to find multiplication of: ";
    cin>>x>>y;
    cout<<"Multiplication is "<<multiplication_Values(x,y)<<endl;
    cout<<"\nEnter a number to find cube of: ";
    cin>>x;
    cout<<"Cube is "<<cubes(x)<<endl;
    
    return 0;
}