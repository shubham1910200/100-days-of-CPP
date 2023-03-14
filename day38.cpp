/*Day 38 coding Statement : Write a Program to print Non-repeating characters in a string

Description

Get a string as the input from the user and print the non-repeating characters in a string.

Input

Hello

Output

H e o
*/
#include<iostream>
using namespace std;
int main()
{
    char str[100];
    int temp[256] = {0};
    cout<<"Enter the String"<<endl;
    gets(str);
    for(int i = 0;str[i]!='\0';i++)
    {
        temp[str[i]]++;
    }

    for(int i = 0;i<256;i++)
    {
        if(temp[i]==1)
        {
            printf("%c ",i);
        }
    }
    
}