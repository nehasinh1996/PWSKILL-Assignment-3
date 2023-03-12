#include<iostream>
using namespace std;

int main()
{
    int sp,cp;
    cout<<"Enter Cost Price : ";
    cin>>cp;

    cout<<"Enter Selling Price : ";
    cin>>sp;

    if(sp>cp)
    {
        cout<<"Profit = "<<sp-cp;
    }
    else if(cp>sp)
    {
        cout<<"Loss = "<<cp-sp;
    }
    else
    {
        cout<<"Niether Profit nor Loss";
    }
    return 0;
}