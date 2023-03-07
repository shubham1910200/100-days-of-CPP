#include <iostream>

using namespace std;

int sumprimes(int n)

{
     int i, isPrime = 1;

    for(i = 2; i <= n/2; i++)
        {

       if(n % i == 0)

       {

          isPrime = 0;

          break;

       }

    }

    return isPrime;

}

int main()

{

    int num, i;

    cout<<"Insert the num: ";

    cin>>num;

    int flag = 0;

    for(i = 2; i <= num/2; ++i)

    {

         if(sumprimes(i) == 1)

         {

             if(sumprimes(num-i) == 1)

             {

                  cout<<num<<" can be expressed as the sum of "<<i<<" and "<<num-i<<endl;

                  flag = 1;

             }

         }

     }

     if(flag == 0)

          cout<<num<<" cannot be expressed as the sum of two primes";

     return 0;

}