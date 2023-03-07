#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<0)
    {
        cout<<"Negative number";
    }
    else if(n==0)
    {
        cout<<"Neither positive nor negative";
    }
    else
    {
        cout<<"Positive number";
    }
}