#include<iostream>
using namespace std;

void AreaofCircle(int radius)
{
    float Areaofcircle = 3.14*radius*radius;
    cout<<Areaofcircle;
}
int main()
{
    int radius;
    cout<<"Enter the radius"<<endl;
    cin>>radius;
    AreaofCircle(radius);


}