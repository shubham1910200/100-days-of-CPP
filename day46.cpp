/*
Day 46 coding Statement : Write Program to find sum of elements in an array

Description

Get an array as the input from the user and find the sum of the elements.

Input

Enter the size of array

3

Enter the elements of array

5 10 15

Output

30
*/
#include<iostream>
using namespace std;

int sumofarray(int *arr,int n)
{
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        sum = sum+arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int *arr = new int[n];
    for(int i  = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sumofarray(arr,n);
}