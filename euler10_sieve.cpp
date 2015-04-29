// Summation of primes
// Problem 10
// Published on 08 February 2002
// http://projecteuler.net/problem=10
//
// The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
// 
// Problem: Find the sum of all the primes below two million.
//
// Solution uses sieve of Eratosthenes

#include <stdio.h>
#define MAX 2000000

int main()
{
unsigned long int i,x,sum=2;
int list[MAX+1];

for (i=3;i<=MAX;i=i+2) list[i]=1;

for (i=3;i<=(MAX/2);i=i+2)
{
        for (x=2;(x*i)<=MAX;x++)list[x*i]=0;
}

for (i=3;i<=MAX;i=i+2)
{
        if(list[i] == 1)sum = sum + i;
}

printf ("%lld\n",sum);
return 0;
}

