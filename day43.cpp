#include<iostream>
using namespace std;

void checkoddevenmixed(int *arr,int n)
{
    int count1 = 0;
    int count2 = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            count1++;
        }
        else if(arr[i]%2!=0)
        {
            count2++;
        }
       
    }
    if(n==count1)
    {
        cout<<"Even"<<endl;
    }
    else if(n==count2)
    {
        cout<<"Odd"<<endl;
    }
    else
    {
        cout<<"Mixed"<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    checkoddevenmixed(arr,n);
}