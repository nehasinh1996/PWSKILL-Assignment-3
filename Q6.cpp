#include<iostream>
using namespace std;

int main()
{
    float marks;
    cout<<"Enter your marks : ";
    cin>>marks;

    if(marks >= 90 && marks<=100)
    {
        cout<<"Your grade is A+";
    }
    else if(marks >= 80 && marks<=89)
    {
        cout<<"Your grade is A";
    }
    else if(marks >= 70 && marks<=79)
    {
        cout<<"Your grade is B+";
    }
    else if(marks >= 60 && marks<=69)
    {
        cout<<"Your grade is B";
    }
    else if(marks >= 50 && marks<=59)
    {
        cout<<"Your grade is C";
    }
    else if(marks >= 40 && marks<=49)
    {
        cout<<"Your grade is D";
    }
    else if(marks >= 30 && marks<=39)
    {
        cout<<"Your grade is E";
    }
    else if(marks <30)
    {
        cout<<"Your grade id F";
    }
    else
    {
        cout<<"Invalid marks";
    }
    return 0;
}