#include <iostream>
#include <iomanip>

using namespace std;

int main()
{  
   const double INITIAL_BALANCE = 10000;
   double balance = INITIAL_BALANCE;
   int nyears;
   double rate ;
   cout << "Enter number of years and interest rate: \n";
   cin >> nyears >> rate;

   cout << fixed << setprecision(2);
   for (int year = 1; year <= nyears; year++)
   { 
      balance = balance * (1 + rate / 100);
      cout << setw(4) << year << setw(10) << balance << endl;
   }

   return 0;
}

