/*
Day 66 coding Statement : Palindromic substrings

Anoop likes strings a lot but he likes palindromic strings more. Today, Anoop has two strings A and B, each consisting of lower case alphabets.

Anoop is eager to know whether it is possible to choose some non empty strings s1 and s2 where s1 is a substring of A, s2 is a substring of B such that s1 + s2 is a palindromic string.

Here '+' denotes the concatenation between the strings.

Input

First line of input contains a single integer T denoting the number of test cases.

For each test case:

First line contains the string A

Second line contains the string B.

Output

For each test case, Print "Yes" (without quotes) if it possible to choose such strings s1 & s2. Print "No" (without quotes) otherwise.

Input

3

abc

abc

a

b

abba

baab

Output

Yes

No

Yes
*/

#include<iostream>
#include<cstring>
using namespace std;

void substrings(string str1,string str2)
{
    bool found = false;
   for(int i = 0;str1[i]!='\0';i++)
   {
    for(int j = 0;str2[j]!='\0';j++)
    {
        if(str1[i]==str2[j])
        {
            found = true;
            break;;
        }
        
    }
   }
   if(found)
   {
    cout<<"Yes"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1;
        cin>>str1;
        string str2;
        cin>>str2;
        substrings(str1,str2);

        

    }
}