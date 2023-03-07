#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter X Cordinates"<<endl;
    cin>>x;
    int y;
    cout<<"Enter y Cordinates"<<endl;
    cin>>y;

    if(x<0 && y<0)
    {
        cout<<"This point lies in Fourth Quadrant";
    }
    else if(x<0 && y>0)
    {
        cout<<"This point lies in Second Quadrant";
    }
    else if(x>0 && y<0)
    {
        cout<<"This point lies in Third Quadrant";
    }
    else
    {
        cout<<"This point lies in First Quadrant";
    }

}