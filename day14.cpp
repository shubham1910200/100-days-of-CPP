#include<iostream>
using namespace std;

void reverse(int n)
{
      int sum = 0;
    while(n>0)
    {
      
        int rem = n%10;
        sum = sum*10 + rem;
         
        n = n/10;
       
    }
    cout<<sum<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    reverse(n);
}