#include <iostream>
#include <string>

using namespace std ;

int main()
{
	int digit ; //switch can only test int and char types
	string digit_name ;

	cout << "Please enter a digit from 1 to 9:" ;
	cin >> digit ;

	cout << endl << "Example using if..else..if" << endl ;
	if (digit == 1) { digit_name = "one"; }
	else if (digit == 2) { digit_name = "two"; }
	else if (digit == 3) { digit_name = "three"; }
	else if (digit == 4) { digit_name = "four"; }
	else if (digit == 5) { digit_name = "five"; }
	else if (digit == 6) { digit_name = "six"; }
	else if (digit == 7) { digit_name = "seven"; }
	else if (digit == 8) { digit_name = "eight"; }
	else if (digit == 9) { digit_name = "nine"; }
	else { digit_name = ""; }
	cout << "digit_name = " << digit_name << endl << endl ;

	cout << endl << "Example using switch without break" << endl ;
	switch(digit)
	{
		case 1: 
			digit_name = "one"; 
		case 2: 
			digit_name = "two"; 
		case 3: 
			digit_name = "three"; 
		case 4: 
			digit_name = "four"; 
		case 5: 
			digit_name = "five"; 
		case 6: 
			digit_name = "six"; 
		case 7: 
			digit_name = "seven"; 
		case 8: 
			digit_name = "eight"; 
		case 9: 
			digit_name = "nine"; 
		default: 
			digit_name = ""; //taken if none of the above
	}
	cout << "digit_name = " << digit_name << endl << endl ;

	cout << endl << "Example using switch with break" << endl ;
	switch(digit)
	{
		case 1: 
			digit_name = "one"; 
			break;
		case 2: 
			digit_name = "two"; 
			break;
		case 3: 
			digit_name = "three"; 
			break;
		case 4: 
			digit_name = "four"; 
			break;
		case 5: 
			digit_name = "five"; 
			break;
		case 6: 
			digit_name = "six"; 
			break;
		case 7: 
			digit_name = "seven"; 
			break;
		case 8: 
			digit_name = "eight"; 
			break;
		case 9: 
			digit_name = "nine"; 
			break;
		default: 
			digit_name = ""; 
			break; //taken if none of the above
	}
	cout << "digit_name = " << digit_name << endl << endl ;
}
