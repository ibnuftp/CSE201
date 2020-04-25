#include <iostream>

using namespace std;

/**
   Computes the sum of digits in a nonnegative integer.
   @param n an integer >= 0
   @return the sum of the digits in n
*/
int digit_sum(int n)
{
   // Special case for terminating the recursion
   if (n == 0) { return 0; }
   // General case
   return digit_sum(n / 10) + n % 10;
}

int main()
{
   cout << digit_sum(1729);
}

