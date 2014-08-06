// Largest prime factor
// Problem 3
// Published on 02 November 2001
// http://projecteuler.net/problem=3
//
// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?
//
// Solution uses 6K +-1 < sqrt(n) brute force to find divisors 
// in function prime_test. Also the same method to find factors.


#include <iostream>
#include <math.h>

using namespace std;

bool prime_test(long int a)
{
long int i,to;
to = (sqrt(a));
if (((a % 2) == 0) || ((a % 3) == 0) || ((a % 5) == 0))return 0;

for (i=6; i<=(to+1); i=i+6)
{
        if ((a%(i-1))==0||(a%(i+1))==0)return false;
}
return true;
}

int main()
{
long int i,to,biggest_prime,number=600851475143;
to = sqrt(number);

for (i=6;i<=to;i=i+6)
{
        if ((number%(i-1))==0){if(prime_test(i-1)==true) biggest_prime=i-1;}
        if ((number%(i+1))==0){if(prime_test(i+1)==true) biggest_prime=i+1;}
}
cout << "biggest prime factor is:" << biggest_prime << "\n";
return 0;
}
