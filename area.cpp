#include<iostream>
using namespace std;
#define PI 3.14
int main()
{
    int radius;
    float area;
    cout<<"Enter the Radius of the Circle "<<endl;
    cin>>radius;
    area=PI*radius*radius;
    cout<<"Area of the Circle is "<<area<<endl;
    return 0;
}