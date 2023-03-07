#include<iostream>
using namespace std;

void factor(int n)
{

    for(int i = 1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    factor(n);
}