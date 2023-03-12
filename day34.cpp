/*Day 34 coding Statement : Write a Program to Remove brackets from an algebraic expression

Description

Get an algebraic expression as input from the user and then remove all the brackets in that.

Input

7x+(2*y)

Output

7x+2*y
*/

#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cin.getline(str,100);
 
    for(int i = 0;str[i]!='\0';i++)
    {
        if(str[i]=='(' || str[i]==')')
        {
            continue;
        }
        else
        {
            cout<<str[i];
        }
    }
}