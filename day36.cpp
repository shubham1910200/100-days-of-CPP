/*Day 36 coding Statement : Write a Program to Capitalize the first and last letter of each word of a string

Description

Get a string from the user and then change the first and last letter to uppercase.

Input

programming

Output

ProgramminG
*/
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the String"<<endl;
    cin.getline(str,100);
    int length = strlen(str);
    for(int i = 0;str[i]!='\0';i++)
    {
        if(i==0 || i==length-1)
        {
            str[i] = str[i]-32;
        }
    }
    cout<<str;
}