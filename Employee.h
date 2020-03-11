//============================================================================
// Author      : Zhenia Steger
// College     : California Statee San Marcos
// Purpose     : Implementation of the Employee class.
// Purpose     : Header file for Employee class
// 					Declares static and const variables. Initilized in .cpp
//					Friend function SetSalary(Employee &e)
//					is a friend function residing in driver.cpp
//					Takes pointer to Employee object as parameter.
//============================================================================

#ifndef Employee_H						// Header Guards
#define Employee_H

#include <string>

using namespace std;

class Employee
{
	private:
	string name;						// Name of the employee, as a getLine()
	const long officeNo;				// Does not change after employee created
	const long empId;					// Does not change after employee created
	int deptNo;							// Department number
	char empPosition;					// 'E' entry level; 'M' manager; D director; 'P' project leader
	int yearOfExp;						// Uses yearsOfExp to determine salary
	float salary;						// salary is set by friend function
	static int totalNumOfEmployees; 	// Initialized to 0 in implementation file
	static int nextEmpId;				// Initialized to 1000 in implementation file
	static int nextOfficeNo;			// Initialized to 10 in implementation file

	public:
	Employee();								// Default constructor
	Employee(string theName, int theDeptNo, char theEmpPosition, int theYearOfExp);
	~Employee();							// Default destructor

	void print() const;						// Can only access to print
	void GetInfo();							// Gets info from user about Employee

	friend void SetSalary(Employee &e);		// Friend function from driver.cpp
};
#endif
// END OF EMPLOYEE HEADER