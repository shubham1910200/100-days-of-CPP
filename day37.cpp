/*Day 37 coding Statement : Write a Program to calculate the Frequency of characters in a string

Description

Get a string as the input from the user and find the frequency of characters in the string.

Input

program

Output

The frequency of a is 1

The frequency of g is 1

The frequency of m is 1

The frequency of o is 1

The frequency of p is 1

The frequency of r is 2
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    int frequency[256] = {0};
    cout<<"Enter the string"<<endl;
    gets(str);
    for(int i = 0;str[i]!='\0';i++)
    {
        frequency[str[i]]++;
    }

    for(int i =0;i<256;i++)
    {
        if(frequency[i]!=0)
        {
            printf("The Frequency of %c %d \n",i,frequency[i]);
        }
    }
}