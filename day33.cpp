/*Day 33 coding Statement : Write a Program to check if String is a palindrome or not

Description

Get an input string from the user and then check whether it is a palindrome string or not.

Input

noon

Output

Palindrome

Input

Talent

Output

Not a Palindrome*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the String"<<endl;
    cin.getline(str,100);

    int length = strlen(str)-1;
    int i = 0;
    bool flag = true;
    while(i<length)
    {
        if(str[i]!=str[length])
        {
            
            flag = false;
            break;
        }
        i++;
        length--;
    }
    if(flag)
    {
        cout<<"Pallindrome"<<endl;
    }
    else
    {
        cout<<"Not pallindrome"<<endl;
    }

    

}


