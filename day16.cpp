#include<iostream>
using namespace std;


void perfectnumber(int n)
{
    int number = n;
    int count = 0;
    for(int i = 1;i<n;i++)
    {
        if(n%i==0)
        {
            count = count+i;
        }

    }
    if(count==number)
    {
        cout<<"Perfect number"<<endl;
    }
    else
    {
        cout<<"Noa a perfect number"<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    perfectnumber(n);
}