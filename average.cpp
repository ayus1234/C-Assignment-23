#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    float avg;
    cout<<"Enter three numbers "<<endl;
    cin>>num1>>num2>>num3;
    avg=(num1+num2+num3)/3.0;
    cout<<"Average of "<<num1<<" , "<<num2<<" and "<<num3<<" is "<<avg<<endl;
    return 0;
}