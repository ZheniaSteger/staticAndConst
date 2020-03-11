//============================================================================
// Author      : Zhenia Steger
// College     : California Statee San Marcos
// Purpose     : Implementation of the Employee class.
// 					Contains methods. Initializes const variables:
//					totalNumOfEmployees, nextEmpId, nextOfficeNo
//					Constructors increment these values when new object is created.
//============================================================================

#include <iostream>
#include <string>

#include "Employee.h"

using namespace std;

// LOCAL VARIABLES
int Employee::totalNumOfEmployees = 0;		// Starting with zero employees
int Employee::nextEmpId = 1000;				// Starting with employee id 1000
int Employee::nextOfficeNo = 10;			// Starting with office # 10

// Default Constructor (no params)
// Purpose: Initializes Employee object with default parameters
Employee::Employee()
	: officeNo(nextOfficeNo++), empId(nextEmpId++)	// Increment officeNo and empId
{
	name = "Unknown";
	deptNo = 0;
	empPosition = 'E';
	yearOfExp = 0;
	salary = 0.0;

	totalNumOfEmployees++;
}

// Constructor with params
// Purpose: Initializes Employee object with passed parameters
Employee::Employee(string theName, int theDeptNo, char theEmpPosition, int theYearOfExp)
	: officeNo(nextOfficeNo++), empId(nextEmpId++)	// Increment officeNo and empId
{
	name = theName;
	deptNo = theDeptNo;
	empPosition = theEmpPosition;
	yearOfExp = theYearOfExp;
	salary = 0.0;

	totalNumOfEmployees++;
}

// Default destructor
// Purpose: Decrements the number of employees
Employee::~Employee() {totalNumOfEmployees--;}

// METHODS
// Print method prints all attributes of Employee class (const)
void Employee::print() const
{
	cout << endl;
	cout << "===The Employees' Profile===" << endl;
	cout << "Employee Name: " << this->name << endl;
	cout << "Office Number: " << this->officeNo << endl;
	cout << "Employee ID: " << this->empId << endl;
	cout << "Department No: " << this->deptNo << endl;
	cout << "Employee Position: " << this->empPosition << endl;
	cout << "Years of Experience: " << this->yearOfExp << endl;
	cout << "Salary: " << this->salary << endl;
	cout << endl;
}

// GetInfo method gets information on the Employee
void Employee::GetInfo()
{
	cout << "===Enter Employee Information===" << endl;
	cout << "What is the Employees' name?" << endl;
	getline(cin, this->name);
	cout << "What is the employees' position?" << endl;
	cout << "Enter 'E' for entry lvl, 'M' for manager, 'D' for Director, 'P' for project leader." << endl;
	cin >> this->empPosition;
	cout << "How many year of experience does the employee have?" << endl;
	cin >> this->yearOfExp;
}
// END OF EMPLOYEE CLASS