/*Day 39 coding Statement : Write a Program to check if two strings are Anagram or not

Description

Get two strings as input from the user and check whether it is Anagram or not.

Input

sunlight thgiluns

Output

Anagram
*/
#include<iostream>
#include<cstring>
using namespace std;

void Anagram(char str1[100],char str2[100])
{
     char frequency[256] = {0};
     int length1 = strlen(str1);
     int length2 = strlen(str2);
     bool flag = true;
     if(length1!=length2)
     {
        flag = false;
     }
     else
     {
        for(int i = 0;str1[i]!='\0';i++)
        {
            frequency[str1[i]]++;
        }
        for(int i=0;str2[i]!='\0';i++)
        {
            frequency[str2[i]]--;
        }
        for(int i = 0;i<256;i++)
        {
            if(frequency[i]!=0)
            {
                flag = false;
                break;
            }
        }
        
     }
     if(flag)
     {
        cout<<"Anagram"<<endl;
     }
     else
     {
        cout<<"not Anagram "<<endl;
     }
    
    


}
int main()
{
    char str1[100];
    char str2[100];
    
    cout<<"Enter the first String"<<endl;
    gets(str1);
    cout<<"Enter the Second String"<<endl;
    gets(str2);
    Anagram(str1,str2);
   
   


}