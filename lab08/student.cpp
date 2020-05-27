#include <string>
#include "student.h"

Name::Name()
{
	firstName = "" ;
	lastName = "" ;
}

void Name::setFirstName(std::string fn)
{
	firstName = fn ;
}

void Name::setLastName(std::string ln)
{
	lastName = ln ;
}

std::string Name::getFirstName() const
{
	return firstName ;
}

std::string Name::getLastName() const
{
	return lastName ;
}

std::string Name::getName() const
{
	std::string fullName = "" ;
	fullName = firstName + " " + lastName ;
	return fullName ;
}

Address::Address()
{
	streetNumber = "" ;
	streetName = "" ;
	apt_suite = "" ;
	city = "" ;
	state = "" ;
	zipCode = "" ;
}

void Address::setStreetNumber(std::string sn)
{
	streetNumber = sn ;
}

void Address::setStreetName(std::string sn)
{
	streetName = sn ;
}

void Address::setAptSuite(std::string as)
{
	apt_suite = as ;
}

void Address::setCity(string c) 
{
	city = c ;
}

void Address::setState(string s)
{
	state = s ;
}

void Address::setZipCode(string z)
{
	zipCode = z ;
}

string Address::getStreetNumber() const
{
	return streetNumber ;
}

string Address::getStreetName() const
{
	return streetName ;
}

string Address::getAptSuite () const
{
	return apt_suite ;
}

string Address::getCity() const
{
	return city ;
}

string Address::getState() const 
{
	return state ;
}

string Address::getZipCode() const
{
	return zipCode ;
}

string Address::getFullAddress() const 
{
	string fullAddress ;
	fullAddress = streetNumber + " " + streetName + ", " + apt_suite + " " + city + " " + state + ", " + zipCode ;
	return fullAddress ;
}

Student::Student()
{
	stdId = "" ;
	gpa = 0.0 ;
}

Student::Student(string id, double gpa)
{
	Student::stdId = id ;
	Student::gpa = gpa ;
}

Student::Student(ifstream& sf)
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

	getline(sf, id) ;
	getline(sf, fn) ;
	getline(sf, ln) ;
	getline(sf, sno) ;
	getline(sf, sname) ;
	getline(sf, suite) ;
	getline(sf, cty) ;
	getline(sf, st) ;
	getline(sf, zip) ;

	sf >> gpa ;
	
	setStdID(id) ;
	name.setFirstName(fn) ;
	name.setLastName(ln) ;
	addr.setStreetNumber(sno) ;
	addr.setStreetName(sname) ;
	addr.setAptSuite(suite) ;
	addr.setCity(cty) ;
	addr.setState(st) ;
	addr.setZipCode(zip) ;
	setGPA(gpa) ;
}

void Student::setStdID(string id)
{
	stdId = id ;
}

void Student::setFirstName(string fn)
{
	name.setFirstName(fn) ;
}

void Student::setLastName(string ln)
{
	name.setLastName(ln) ;
}

void Student::setGPA(double gpa)
{
	Student::gpa = gpa ;
}

string Student::getStdID() const
{
	return stdId ;
}

string Student::getFullName() const
{
	return name.getName() ;
}

string Student::getFullAddress() const 
{
	return addr.getFullAddress() ;
}

double Student::getGPA() const
{
	return gpa ;
}	
