/*
Day 40 coding Statement : Write a Program to Replace substring in a string

Description

Get a string as input from the user and then get another string which has to be removed from the string.

Get the third input, the new substring which is placed in that substring position.

Finally print the output by replacing the substring with new string.

Input

Enter a string

talentbattle

Enter the substring to be removed :

talent

Enter the new substring :

student

Output

The new string :

studentbattle
*/
#include<iostream>
using namespace std;

void replcaesubstring(char str1[100],char str2[100],char str3[100])
{
    char temp[100];
    for(int i = 0;str1[i]!='\0';i++)
    {
        if(str1[i]==str2[i])
        {
            str1[i] = str3[i];
        }
    }
    cout<<str1;
}
int main()
{
    char str1[100];

    cout<<"Enter the String"<<endl;
    gets(str1);
    char str2[100];
    cout<<"Enter the substring to be removed"<<endl;
    cin.getline(str2,100);
    char str3[100];
    cout<<"Enter the new substring"<<endl;
    cin.getline(str3,100);
    replcaesubstring(str1,str2,str3);
    

}