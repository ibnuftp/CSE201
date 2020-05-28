#include <iostream>
#include <fstream>
#include <string>
#include "student.h"

using namespace std ;

void populateStudents(ifstream& fs , Student std[] , const int size) ;
int findHighestGPA(Student std[] , const int size) ;

int main(int argc , char* argv[])
{
	const int MAXRECORD = 5 ;
	ifstream input_file ;
	input_file.open("student.txt") ;

	Student std[MAXRECORD] ;
	int highestGPAIndex ;

	populateStudents(input_file, std, MAXRECORD) ;

	// highestGPAIndex = findHighestGPA(std , MAXRECORD) ;
	// cout << std[highestGPAIndex].getFullName() << " has heighest GPA " << std[highestGPAIndex].getGPA << endl ;
}

void populateStudents(ifstream& fs , Student std[], const int size)
{
	string id ;
        string fn ;
        string ln ;
        string sno ;
        string sname ;
        string suite ;
        string cty ;
        string st ;
        string zip ;
        double gpa ;
	double whitespace ;

	for (int i = 0 ; i < size ; i++)
	{
		// Rreading data from student.txt file
        	getline(fs, id) ;
        	getline(fs, fn) ;
        	getline(fs, ln) ;
        	getline(fs, sno) ;
        	getline(fs, sname) ;
        	getline(fs, suite) ;
        	getline(fs, cty) ;
        	getline(fs, st) ;
        	getline(fs, zip) ;
		fs >> gpa >> whitespace ;

        	// Populationg data to the object Student
		std[i].setStdID(id) ;
        	std[i].setFirstName(fn) ;
        	std[i].setLastName(ln) ;
/*
        	std[i].setStreetNumber(sno) ;
        	std[i].setStreetName(sname) ;
        	std[i].setAptSuite(suite) ;
        	std[i].setCity(cty) ;
        	std[i].setState(st) ;
        	std[i].setZipCode(zip) ;
*/
        	std[i].setGPA(gpa) ;
	}
}
