#include<iostream>
using namespace std;
int main()
{
    int length,breadth,height,volume;
    cout<<"Enter the length, breadth and height of the Cuboid "<<endl;
    cin>>length>>breadth>>height;
    volume=length*breadth*height;
    cout<<"Volume of the Cuboid is "<<volume<<endl;
    return 0;
}