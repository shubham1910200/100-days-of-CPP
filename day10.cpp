//Factorial program

#include<iostream>
using namespace std;

int fact(int n)
{
    int facts=1;
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
   
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
   cout<<fact(n);
}