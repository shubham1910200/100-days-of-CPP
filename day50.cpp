/*
Day 50 coding Statement : Given an integer array of size N. Write Program to find sum of positive square elements in the array.

Sample input 1 :

4 1 2 3 4

Sample output 1 :

30

Explanation :

(1 + 4 + 9 + 16) = 30

Sample input 2 :

4 -1 -2 -3 -4

Sample output 2 :

30

Explanation :

(1 + 4 + 9 + 16) = 30
*/

#include<iostream>
#include<math.h>
using namespace std;

long long int SumofSquare(int *arr,int n)
{
    long long int sum = 0;
    for(int i = 0;i<n;i++)
    {
        sum = sum + arr[i] * arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int *arr = new int[n];
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
       cin>>arr[i];

    }
    
    cout<<SumofSquare(arr,n);
    

}