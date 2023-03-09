/*Day 29 coding Statement : Write a Program to concatenate a string.

Description

Get two strings as input from the user and then concatenate it.

Input

Enter first string

Hello

Enter second string

Hi

Output

HelloHi*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    // string s1,s2,result;
    char s1[100],s2[100];

    cout<<"Enter the first String"<<endl;
        cin.getline(s1,100);
    // getline(cin,s1);
    cout<<"Enter the Second String"<<endl;
    cin.getline(s2,100);
    strcat(s1,s2);
    cout<<s1;
    // getline(cin,s2);

    // result = s1 +s2;
    // cout<<result<<endl;
    

}