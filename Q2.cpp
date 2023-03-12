#include<iostream>
using namespace std;

int main()
{
    int a;

    cout<<"Enter a number"<<endl;
    cin>>a;

    if(a<0)
    {
        a=a*(-1);
        cout<<"Absolute value is "<<a<<endl;
    }
    else
    {
        cout<<"Absolute value is "<<a<<endl;
    }
    return 0;
}