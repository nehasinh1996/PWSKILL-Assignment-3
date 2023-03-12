#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    char op;
    cout<<"Enter an operator (+,-,*,/):-"<<endl;
    cin>>op;

    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;

    switch (op){
        case '+':
            cout<<a<<" + "<<b<<" = "<<a+b;
            break;
        case '-':
            cout<<a<<" - "<<b<<" = "<<a-b;
            break;
        case '*':
            cout<<a<<" * "<<b<<" = "<<a*b;
            break;
        case '/':
            cout<<a<<" / "<<b<<" = "<<a/b;
            break;
        default:
            cout<<"Invalid operator";
            break;
    }
    return 0;
}