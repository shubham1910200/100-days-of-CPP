/*
Day 70 coding Statement : Given an array, rotate the array by one position in clock-wise direction.

Example 1:

Input:

N = 5

A[] = {1, 2, 3, 4, 5}

Output:

5 1 2 3 4

Example 2:

Input:

N = 8

A[] = {9, 8, 7, 6, 4, 2, 1, 3}

Output:

3 9 8 7 6 4 2 1

 
*/

#include<iostream>
using namespace std;
void rotate(int *arr,int n)
{
    int length = n-1;
    int *input = new int[n];
    for(int i = 0;i<n;i++)
    {
        input[i+1] = arr[i];
    }
    input[0] = arr[length];
    for(int i = 0;i<n;i++)
    {
        cout<<input[i]<<" ";
    }

}
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotate(arr,n);
}