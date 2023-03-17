/*
Day 42 coding Statement : Write Program to check if two arrays are the same or not

Description

Get two arrays as the input from the user and check whether it is the same or not.

Input

Enter the size of first array :

3

Enter the size of second array :

3

Enter elements of first array :

1 2 3

Enter elements of second array :

1 2 3

Output

Same
*/

#include<iostream>
using namespace std;

int sort(int arr1[],int n1)
{
    for(int i = 0;i<n1;i++)
    {
        for(int j  = 0;j<n1-i-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }

}

int check(int arr1[],int n1,int arr2[],int n2)
{
    sort(arr1,n1);
    sort(arr2,n2);
    
    for(int i = 0;i<n1;i++)
    {
        if(arr1[i]!=arr2[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1;
     int n2;
   
    cout<<"Enter the size of first array:"<<endl;
     cin>>n1;
    int arr1[n1];

    
    cout<<"Enter the size of second array: "<<endl;
   
    cin>>n2;
    int arr2[n2];
    cout<<"Enter the element of first array"<<endl;
    for(int i = 0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the element of Second array"<<endl;
    for(int i = 0;i<n2;i++)
    {
        cin>>arr2[i];
    }

    
    sort(arr1,n1);

    int ans = check(arr1,n1,arr2,n2);
    if(ans)
    {
        cout<<"Same"<<endl;
    }
    else
    {
        cout<<"Not same"<<endl;
    }
    

    
    

}