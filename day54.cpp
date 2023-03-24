/*
Day 54 coding Statement : Given an integer array of size N. Write Program to find whether Arrays are disjoint or not. Two arrays are said to be disjoint if they have no elements in common.

Sample input 1:

4

2 -4 -1 -3

3

1 3 5

Sample output 1:

Disjoint

Sample input 2:

5

1 5 -7 6 3

4

2 4 6 8

Sample output 2:

Not disjoint. ( 6 is common)
*/

#include<iostream>
using namespace std;

bool disjoint(int *arr1,int n,int *arr2,int m)
{
    bool flag = true;
    for(int i= 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(arr1[i]==arr2[j])
            {
                flag = false;
                break;
            }
        }
    }
    return flag;
}
int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int *arr1 = new int[n];
    cout<<"Enter the array element "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter the second array of size"<<endl;
    cin>>m;
    int *arr2 = new int[n];
    cout<<"Enter the second array of element"<<endl;
    for(int i = 0;i<m;i++)
    {
        cin>>arr2[i];
    }
    bool ans = disjoint(arr1,n,arr2,m);
    if(ans)
    {
        cout<<"Disjoint"<<endl;
    }
    else
    {
        cout<<"not disjoint"<<endl;
    }

}