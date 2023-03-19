/*
Day 48 coding Statement : Write Program to remove duplicate elements in an array

Description

Get an array as input from the user and then remove all the duplicate elements in that array.

Input

Enter the size of array

5

Enter the elements of array

35 35 45 60 60

Output

35 45 60
*/
#include<iostream>
using namespace std;

void duplicate(int *arr,int n)
{
    for(int i = 0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            cout<<arr[i]<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int *arr = new int[n];
cout<<"Enter the elements of array"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    duplicate(arr,n);
}