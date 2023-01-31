#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,sum=0;
    cout<<"Enter 10 Numbers "<<endl;
    for(i=0;i<=9;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}