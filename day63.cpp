/*
Day 63 coding Statement : Balancing Weight

No play and eating all day makes your belly fat. This happened to Manish during the lockdown. His weight before the lockdown was w1 kg (measured on the most accurate hospital machine) and after M months of lockdown, when he measured his weight at home (on a regular scale, which can be inaccurate), he got the result that his weight was w2 kg (w2>w1).

Scientific research in all growing kids shows that their weights increase by a value between x1 and x2 kg (inclusive) per month, but not necessarily the same value each month. Manish assumes that he is a growing kid. Tell him whether his home scale could be giving correct results.

Input

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows. The first and only line of each test case contains five space-separated integers w1, w2, x1, x2 and M.

Output

For each test case, print a single line containing the integer 1 if the result shown by the scale can be correct or 0 if it cannot.

Sample Input 1

5

1 2 1 2 2

2 4 1 2 2

4 8 1 2 2

5 8 1 2 2

1 100 1 2 2

Sample Output 1

0

1

1

1

0
*/

#include<iostream>
using namespace std;
void weight(int w1,int w2,int x1,int x2,int m)
{
    int min_w  = w1 + x1*m;
    int max_w = w1 + x2*m;
    if(w2>=min_w && w2<=max_w)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w1;
        cin>>w1;
        int w2;
        cin>>w2;
        int x1;
        cin>>x1;
        int x2;
        cin>>x2;
        int m;
        cin>>m;
        weight(w1,w2,x1,x2,m);
    }
}