#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter an Integer no. ";
    cin>>n;

    if(n>0)
    {
        cout<<n<<" is a possitive number";
    }
    else if(n<0)
    {
        cout<<"The number is negative and skipped";
    }
    else
    {
        cout<<"It is niether negative nor possitive number";
    }
    return 0;

}