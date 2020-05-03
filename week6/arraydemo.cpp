#include <iostream>

using namespace std;

int main()
{
   double values[] = { 32, 54, 67.5, 29, 0, 80, 115, 44.5, 100, 65 };
   values[4] = 34.5;
   for (int i = 0; i < 10; i++)
   {
      cout << "values[" << i << "]: " << values[i] << endl;
   }
   
   return 0;
}

