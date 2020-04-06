// sample C++ program

#include <iostream>

using namespace std ;

int main()
{
	// Increment and Decrement
	int count = 3 ;
	count-- ; // count = count - 1 == 2
	count = count + 2 ; // count += 2
	count++ ;
	cout << "count = " << count << endl ;

	//Integer Division and Remainder
	int pennies = 1729 ;
	int dollars = pennies / 100 ; //Sets dollars to 17
	int cents = pennies % 100 ; // Sets cents to 29
	cout << "pennies = " << pennies << endl ;
	cout << "Integer Division and Remainder" << endl ;
	cout << "dollars = " << dollars << endl ;
	cout << "cents = " << cents << endl ;
	
	// Unintended Integer Division
	cout << "Unintended Integer Division" << endl ;
	cout << 7 / 3 << endl ;
	cout << 7.0 / 4.0 << endl ;
	cout << 7 / 4.0 << endl ;
	cout << 7.0 / 4 << endl ;

	// Casting Example
	cout << "Casting..." << endl ;
	double volume = 21.58 ;
	int intVol1, intVol2, intVol3 ;
	intVol1 = (int) volume ;
	intVol2 = int(volume) ;
	intVol3 = static_cast<int>(volume) ;
	cout << "volume = " << volume << endl ;
	cout << "intVol1 = " << intVol1 << endl ;
	cout << "intVol2 = " << intVol2 << endl ;
	cout << "intVol3 = " << intVol3 << endl ;

	return 0 ;
}
