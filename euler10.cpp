#include <iostream>
#include <math.h>

using namespace std;

bool prime_test(unsigned long long a)
{
unsigned long long int i,to;
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
unsigned long long int sum=10,i;

for (i=7;i<=2000000;i=i+2)
{
        if ((prime_test(i)==true))
        {
        sum=sum+i;
        }

}
cout << "sum: " << sum;
return 0;
}
