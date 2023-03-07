#include<iostream>
using namespace std;
void prime(int n)
{
    bool num = true;
    for(int i = 2;i<n;i++)
    {
        if(n%i==0)
        {
            num=false;
            break;

        }
    }
    if(num)
    {
        cout<<n<<"  is a prime number";
    }
    else
    {
        cout<<n<<" is not a prime number";
    }
}
int main()
{
    int n;
    cin>>n;
    prime(n);
}