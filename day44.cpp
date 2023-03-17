/*
Day 44 coding Statement : Write Program to find number of even and odd elements in an array

Description

Get an array as input from the user and then count the number of even and odd elements present in the array.

Input

Enter size of array

4

Enter the elements :

1 3 4 5

Output

Number of even elements :

1

Number of odd elements :

3
*/

#include<iostream>
using namespace std;

void oddeven(int *arr,int n)
{
    int even = 0;
    int odd = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
                even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"Number of even elements: "<<even<<endl;
    cout<<"Number of odd elements :"<<odd<<endl;


}
int main()
{
    int n;
   
   
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    oddeven(arr,n);
  
}