#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector<double> values(5) ; // declare vector value with double data type
   // initialize values
   values.push_back(32) ;
   values.push_back(54) ;
   values.push_back(67.5) ;
   values.push_back(29) ;
   values.push_back(0) ;
   values.push_back(80) ;
   values.push_back(115) ;
   values.push_back(44.5) ;
   values.push_back(100) ;
   values.push_back(65) ;

   values[4] = 34.5;
   cout << "Size of the vector values is " << values.size() << endl ;
   for (int i = 0; i < values.size() ; i++)
   {
      cout << "values[" << i << "]: " << values[i] << endl;
   }
  
   values.pop_back() ;
   values.pop_back() ;
   cout << "Size of the vector values is " << values.size() << endl ;
   
   return 0;
}

