
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    cin.getline(str,100);
    
    int length = strlen(str)-1;
for(int i = 0;str[i]!='\0';i++)
{
    cout<<str[length-i];
}
   
    
}