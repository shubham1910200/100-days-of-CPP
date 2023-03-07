#include<iostream>
using namespace std;


void replaceZerowithOne(int n)
{
    
    int num2 = 0;
    int sum = 0;
    while(n>0)
    {
        int rem = n%10;
        if(rem==0)
        {
            rem = 1;
        }
        n = n/10;
        num2 = num2*10 + rem;
    }
    
    // cout<<num2;
    // Reverse the number
    while(num2>0)
    {
        int rem = num2%10;
        
        sum = sum*10 + rem;
        num2 = num2/10;
    }
    cout<<sum<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    replaceZerowithOne(n);

}


