#include<iostream>
using namespace std;

void Addfactor(int x1,int y1,int x2,int y2)
{
    int Div;
    int x3 = (x1*y2) + (x2*y1);
    int y3 = (y1*y2);
    if(x3>y3)
    {
        Div = y3;
        
    }
    else
    {
        Div = x3;
    }
    for(int i = Div;i>0;i--)
    {
        if(x3%i==0 && y3%i==0)
        {
            x3 = x3/i;
            y3 = y3/i;
        }
    }
    cout<<"Sum of two fraction is "<<x3<<"/"<<y3;

}
int main()
{
    int x1,y1;
    int x2,y2;
    
    cin>>x1>>y1>>x2>>y2;
    Addfactor(x1,y1,x2,y2);


}