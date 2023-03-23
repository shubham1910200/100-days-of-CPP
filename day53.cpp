/*
Day 53 coding Statement : Given an integer array of size N. Write Program to find maximum product subarray in a given array.

Sample input 1:

4

2 -4 -1 -3

Sample output 1:

8 = {2, -4, -1}

Sample input 2:

5

1 5 -7 5 3

Sample output 2:

15 = {5, 3}
*/
#include<iostream>
using namespace std;
int maximumproduct(int *arr,int n)
{
    
    int result = arr[0];  //Take the first value of array
    for(int i = 0;i<n;i++)
    {
        int mul = arr[i];
        for(int j = i+1;j<n;j++)
        {
            result = max(result,mul);
            mul = mul*arr[j];
        }
        result = max(result,mul);
    }
    return result;
    
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
    int ans = maximumproduct(arr,n);
    cout<<ans;
    
}