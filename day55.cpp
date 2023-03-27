/*
Day 55 coding Statement : Given 2 integer arrays X and Y of same size. Consider both arrays as vectors and print the sum of maximum scalar product (Dot product) of 2 vectors.

Sample input 1:

4

1 2 3 4

5 6 7 8

Sample output 1:

70

Explanation :

(8*4 + 7*3 + 6*2 + 1*5) = 70

Sample input 2:

4

-1 -2 -3 -4

5 6 -7 -8

Sample output 2:

37

Explanation :

(-4*-8 + -3*-7 + -2*5 + -1*6) = 37
*/
#include<iostream>

using namespace std;

void sort(int *arr,int n)
{
    for(int i = 0;i<n-1;i++)
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
}

int maximumsum(int *arr1,int *arr2,int n)
{
    sort(arr1,n);
    sort(arr2,n);
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        sum = sum+(arr1[i] *arr2[i]);
    }
    return sum;

}
int main()
{
    int n;
    cin>>n;
    int *arr1 = new int[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int *arr2 = new int[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr2[i];
    }

    cout<<maximumsum(arr1,arr2,n);

}