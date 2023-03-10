/*Day 31 coding Statement : Write a Program to Toggle each character in a string

Description

Get an input string from user and then convert the lower case of alphabets to upper case and all upper-case alphabets into lower case.*/

#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter the String"<<endl;
    cin.getline(str,100);
    for(int i  =0 ;str[i]!='\0';i++)
    {
       if(int(str[i])>=65 && str[i]<=96)
       {
            char temp = int(str[i]) + 32;
            cout<<temp;
       }
       else if(int(str[i]>=97 && str[i]<=123))
       {
        char temp = int(str[i]) -32;
        cout<<temp;
       }
    }
}