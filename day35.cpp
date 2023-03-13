/*Day 35 coding Statement : Write a Program to Count the sum of numbers in a string

Description

Get a string from the user and find the sum of numbers in the string.

Input

Hello56

Output

11;

*/

#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the string"<<endl;
    cin.getline(str,100);
    int sum = 0;
    for(int i = 0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            sum = sum + (str[i]-'0');
        }
    }
    cout<<sum;
   
    
}