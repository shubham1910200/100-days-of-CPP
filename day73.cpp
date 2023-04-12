/*
Day 73 coding Statement : 

A string is called boring if all the characters of the string are same.

You are given a string S of length N, consisting of lowercase english alphabets. Find the length of the longest boring substring of S which occurs more than once.

Note that if there is no boring substring which occurs more than once in S, the answer will be 00.

A substring is obtained by deleting some (possibly zero) elements from the beginning of the string and some (possibly zero) elements from the end of the string.

Input Format

The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains an integer N, denoting the length of string S.
The next contains string S.
Output Format

For each test case, output on a new line, the length of the longest boring substring of S which occurs more than once.

 

Sample Input

4

3

aaa

3

abc

5

bcaca

6

caabaa

 

Sample Output

2

0

1

2
*/
#include <bits/stdc++.h>
using namespace std;
#define st unordered_set
int main() {
int tc;
cin>>tc;
while(tc--){
 int n;
 cin>>n;
 string str;
 cin>>str;

 string res = "";
 st<string>s;
 res=str[0];
 int l,mx,sum;
 l=mx=0;
 sum=1;
 for(int i=1; i<n; i++){
 if(str[i-1]!=str[i]){
 if(mx<sum){
 mx = sum;
 mx--;
 }
 if(s.find(res)!=s.end())
 l = max(l, sum);
 s.insert(res);
 res = str[i];
 sum=1;
 }
 else{
 sum++;
 res+=str[i];
 }
 }
 if(s.find(res)!=s.end()){
 l = max(l, sum);
 }
 else{
 if(mx<sum){
 mx = sum;

 mx--;
 }
 }
 int ans = max(l, mx);
 cout<<ans<<endl;
}
return 0;
}