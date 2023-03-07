#include<iostream>
using namespace std;
int main()
{
    int month;
    cout<<"Enter the month"<<endl;
    cin>>month;
    int year;
    cout<<"Enter the year"<<endl;
    cin>>year;
    if((month%2==0 && year%400==0 || (year%100!=0 && year%4==0)))
    {
        cout<<"Number of days is 29"<<endl;
    }
    else
    {
        cout<<"Number of days is 28"<<endl;
    }
}