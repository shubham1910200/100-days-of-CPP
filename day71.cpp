/*
Day 71 coding Statement : There are N students in a class, where the i-th student has a score of Ai?.

The i-th student will boast if and only if the number of students scoring less than or equal Ai? is greater than the number of students scoring greater than Ai?.

Find the number of students who will boast.

Input Format

The first line contains T - the number of test cases. Then the test cases follow.
The first line of each test case contains a single integer N - the number of students.
The second line of each test case contains N integers 1,2,…,A1?,A2?,…,AN? - the scores of the students.
Output Format

For each test case, output in a single line the number of students who will boast.

Constraints

1≤10001≤T≤1000
1≤1001≤N≤100
0≤1000≤Ai?≤100
 

Sample Input

3

3

100 100 100

3

2 1 3

4

30 1 30 30

Sample Output

3

2

3
*/
#include<bits/stdc++.h>

using namespace std;
int main()
{
   
   
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>m;
        for(int i=0;i<n;i++)
            {
                int x;
                cin>>x;
                m[x]++;
            }
            vector<int>v(n);
            int i=0,sum=0;
        for(auto it:m)
        {
            if(i!=0)
            {
                 v[i]=v[i-1]+it.second;
        
            }
           
            if(i==0)
            {
                v[i]=it.second;
                
            }
            if(v[i]>n-v[i])
            {

            sum+=it.second;
           
            }
            i++;
        }
    cout<<sum<<endl;
    }
    return 0;
}


