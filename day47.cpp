/*
Day 47 coding Statement : Write Program to find longest palindrome in an array

Description

Get an array as the input from the user and find the longest palindrome in that array.

Input

Enter the size of array

3

Enter the elements of array

121 10456 1000001

Output

1000001
*/

#include<iostream>
using namespace std;
void largestpallindrome(int *arr,int n)
{
    int arr[n];
     for(int i = 0;i<n;i++)
     {
        int temp = arr[i];
        int sum = 0;
        int temp1 = temp;
        while(temp!=0)
        {
            int rem = temp%10;
            sum = sum*10+rem;
            temp  = temp/10;

        }
        if(temp==temp1)
        {
            arr[i] = temp;
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
}