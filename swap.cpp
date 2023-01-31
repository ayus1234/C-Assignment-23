#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two numbers "<<endl;
    cin>>num1>>num2;
    cout<<endl<<"Before Swapping: "<<endl<<num1<<endl<<num2<<endl<<endl;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"After Swapping: "<<endl<<num1<<endl<<num2<<endl;
    return 0;
}