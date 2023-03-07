#include<iostream>
#include<cmath>
using namespace std;


int length(int n,int count)
{
    
    while(n>0)
    {
        int rem = n%10;
        count++;
        n = n/10;

    }

     return count;
    
}
void Armstrong(int n)
{
    int sum  = 0;
    int temp = n;
    int count = 0;

     count= length(temp,count);
    while(n>0)
    {
        int rem = n%10;
        sum = sum+ pow(rem,count);
        n = n/10;

    }
    if(temp==sum)
    {
        cout<<"Armstrong number";
    }
    else
    {
        cout<<"not Armstrong number";
    }
}
int main()
{
    int n;
    cin>>n;
      
    Armstrong(n);
  
}