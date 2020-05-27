#include <string>
#include <fstream>

using namespace std ;

class Name {
	public:
		Name() ;
		void setFirstName(string fn) ;
		void setLastName(string ln) ;
		string getFirstName() const ;
		string getLastName() const ;
		string getName() const ;
	private:
		string firstName ;
		string lastName ;
} ;

class Address {
	public:
		Address() ;
		void setStreetNumber(string sn) ;
		void setStreetName(string sn) ;
		void setAptSuite(string as) ;
		void setCity(string c) ;
		void setState(string s) ;
		void setZipCode(string z) ;
		string getStreetNumber() const ;
		string getStreetName() const ;
		string getAptSuite() const ;
		string getCity() const ;
		string getState() const ;
		string getZipCode() const ;
		string getFullAddress() const ;
	private:
		string streetNumber ;
		string streetName ;
		string apt_suite ;
		string city ;
		string state ;
		string zipCode ;
} ;

class Student {
	public:
		Student() ;
		Student(string ID, double gpa) ;
		Student(ifstream& sf) ;
		void setStdID(string id) ;
		void setFirstName(string fn) ;
		void setLastName(string ln) ;
/*
		void setStreetNumber(string sn) ;
		void setStreetName(string sn) ;
		void setAptSuite(string as) ;
		void setCity(string c) ;
		void setState(string s) ;
		void setZipCode(string z) ;
 */
		void setGPA(double gpa) ;
		string getStdID() const ;
		// string getFirstName() const ;
		// string getLastName() const ;
		string getFullName() const ;
/*
		string getStreetNumber() const ;
		string getStreetName() const ;
		string getAptSuite() const ;
		string getCity() const ;
		string getState() const ;
		string getZipCode() const ;
*/
		string getFullAddress() const ;
		double getGPA() const ;
	private:
		string stdId ;
		Name name;
		Address addr ;
		double gpa ;
} ;


