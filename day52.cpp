/*
Day 52 coding Statement : Given an integer array of size N, write a program to reverse the array;

Sample input 1:

4

2 4 1 3

Sample output 1:

3 1 4 2

Sample input 2:

5

1 5 7 5 3

Sample output 2:

3 5 7 5 1
*/
#include<iostream>

using namespace std;
void reverse(int *arr,int n)
{
    for(int i = 0;i<n;i++)
    {
        cout<<arr[n-i-1]<<" ";
    }
    /*-----------------------------------
    int i =0;
    int tempvar = n-1;
    while(i<tempvar)
    {
        int temp = arr[i];
        arr[i] = arr[tempvar];
        arr[tempvar] = temp;
        i++;
       tempvar--;
      
    }
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    -------------------------------------------
    */
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the element of array"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
}