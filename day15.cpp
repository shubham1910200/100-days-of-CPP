#include<iostream>
using namespace std;
void strong(int n)
{
    int sum = 0;
    int temp = n;
    while(n>0)
    {
        int rem = n%10;
        int count = 1;
        
        for(int i = 1;i<=rem;i++)
        {
            count = count*i;
        }
        sum = sum + count;
        n = n/10;
    }
    if(sum==temp)
    {
        cout<<"Strong number"<<endl;
    }
    else
    {
        cout<<"Not a strong number"<<endl;
    }

}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    strong(n);
}