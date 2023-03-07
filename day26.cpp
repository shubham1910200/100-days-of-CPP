#include<iostream>
using namespace std;

void maximum_handsake(int n)
{
    int sum = n*(n-1)/2;
    cout<<sum;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    maximum_handsake(n);
}