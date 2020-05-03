#include <iostream>

using namespace std;

int main()
{
   const int CAPACITY = 10;
   double values[CAPACITY];
   int current_size = 0;
   double input;
   cout << "Please enter values, Q to quit:" << endl;
   while (cin >> input)
   {
      if (current_size < CAPACITY)
      {
         values[current_size] = input;
         current_size++;
      }
   }

   cout << "Used values:" << endl;
   for (int i = 0; i < current_size; i++)
   {
      cout << "values[" << i << "]: " << values[i] << endl;
   }
   cout << "Unused values:" << endl;
   for (int i = current_size; i < CAPACITY; i++)
   {
      cout << "values[" << i << "]: " << values[i] << endl;
   }

   
   return 0;
}

