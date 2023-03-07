// Sum of digit number
#include<iostream>
using namespace std;

int sum(int n)
{
    int sum = 0;
    while(n>0)
    {
        int rem = n%10;
        sum = sum+ rem;
        
        n = n/10;

    }
    cout<<sum;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    sum(n);
}