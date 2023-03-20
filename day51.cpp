/*
Day 51 coding Statement : Given an integer array of size N, write a program to sort the array;

Sample input 1:

4

2 4 1 3

Sample output 1:

1 2 3 4

Sample input 2:

5

1 5 7 5 3

Sample output 2:

1 3 5 5 7
*/
#include<iostream>
using namespace std;
void sort_array(int *arr,int n)
{
    for(int i  = 0;i<n-1;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"The sorted array is:="<<endl;
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort_array(arr,n);
}