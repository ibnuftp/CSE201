#include <iostream>

using namespace std ;

int strlen(char str[]) ;
void strcpy(char str1[] , char str2[]) ;
void strcmp(char str1[] , char str2[]) ;

int main(int argc, char* argv[])
{
	char string1[] = "It is a cat." ;
	char string2[20] ;
	char string3[] = "It is a cat." ;

	strcpy(string1 , string2) ;
	cout << string2 << endl  ;
	strcmp(string1 , string3) ; 
}

int strlen(char str[])
{
	int i = 0 ;
	while (str[i] != '\0')
	{
		i++ ;
	}
	return i ;
}

void strcpy(char str1[] , char str2[])
{
	cout << strlen(str1) << endl ;
	for (int i = 0 ; i <= strlen(str1) ; i++){
		str2[i] = str1[i] ;
	}
}

void strcmp(char str1[] , char str2[])
{
	int i = 0 ;
	while (str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] < str2[i]) {
			cout << "String1 has smaller value\n" ;
			break ;
		}
		else if (str1[i] > str2[i]) {
			cout << "String2 has smaller value.\n" ;
			break ;
		}
		i++ ;
	}
	if (str1[i] == '\0' && str2[i] == '\0')
		cout << "Both strings are equal\n" ;
}
	
