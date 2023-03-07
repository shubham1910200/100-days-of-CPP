//Factorial program
#include<iostream>
using namespace std;
// Using loop
int fibbonaci(int n)
{
    int a = -1;
    int b = 1;
    int c;
   for(int i = 0;i<n;i++)
   {
    c = a+b;
    cout<<c<<" ";
    a = b;
    b = c;
   }

   
}

int main()
{
    int n;
    cin>>n;
    cout<<fibbonaci(n);
   
}