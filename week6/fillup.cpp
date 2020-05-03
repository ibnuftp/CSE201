#include <iostream>

using namespace std ;

void fillUp (int a[] , int size) ;

int main(int argc , char * argv[])
{
	const int NUMBER_OF_SCORES = 5 ;
	int score[NUMBER_OF_SCORES] = {0} ;

	fillUp(score , NUMBER_OF_SCORES) ;

	for (int i = 0 ; i < NUMBER_OF_SCORES ; i++)
	{
		cout << "score [ " << i << " ] is " << score[i] << endl ;
	}
	
	return 0 ;
}

void fillUp (int a[] , int size)
{
	for (int i = 0 ; i < size ; i++)
	{
		cout << "Please enter a number for array element [ " << i << " ] :" << endl ;
		cin >> a[i] ;
	}
	return ;
}	
