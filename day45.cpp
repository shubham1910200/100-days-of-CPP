/*
Day 45 coding Statement : Write Program to find smallest and largest element in an array

Description

Get an array as input from the user and then find the smallest and largest element in the array.

Input

Enter the size of array :

5

Enter the elements :

10 20 5 40 30

Output

Smallest Number :

5

Largest Number :

40
*/
#include<iostream>
using namespace std;
void largest_smallest(int *arr,int n)
{
    int max = arr[0];
    int min = arr[0];
    for(int i = 1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        else if(arr[i]<min)
        {
            min = arr[i];
        }
        
    }
    cout<<"Smalles Number:= "<<min<<endl;
    cout<<"Largest Number: = "<<max<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    largest_smallest(arr,n);
}