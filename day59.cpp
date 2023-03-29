/*
Day 59 coding Statement : Body Mass Index

You are given the height H (in metres) and mass M (in kilograms) of Anusree. The Body Mass Index (BMI) of a person is computed as M/H^2.

Report the category into which Anusree falls, based on his BMI:

Category 1: Underweight if BMI ≤18

Category 2: Normal weight if BMI ∈{19, 20,…, 24}

Category 3: Overweight if BMI ∈{25, 26,…, 29}

Category 4: Obesity if BMI ≥30

Input:

The first line of input will contain an integer, T, which denotes the number of testcases. Then the testcases follow.

Each testcase contains a single line of input, with two space separated integers, M,H, which denote the mass and height of Anusree respectively.

Output:

For each testcase, output in a single line, 1,2,3 or 4, based on the category in which Anusree falls.

Sample Input:

3

72 2

80 2

120 2

Sample Output:

1

2

4
*/
#include<iostream>
#include<cmath>
using namespace std;

void BMI(int h,int m)
{
    int height = pow(h,2);
    int bmi = m/height;



    if(bmi<18)
    {
        cout<<"Underweight"<<endl;
    }
    else if(bmi>=19 && bmi<=24)
    {
        cout<<"Normal weight"<<endl;
    }
    else if(bmi>=25 && bmi<=29)
    {
        cout<<"Overweight"<<endl;
    }
    else if(bmi>=30)
    {
        cout<<"Obesity"<<endl;
    }
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int m,h;
   
    cout<<"Enter the Mass"<<endl;
    cin>>m;
     cout<<"Enter the height"<<endl;
    cin>>h;
    BMI(h,m);
   }


}