//============================================================================
// Author      : Zhenia Steger
// College     : California Statee San Marcos
// Purpose     : Implementation of the Employee class.
// Purpose     : This program demonstrates the use of constant and static types.
// 					Also demonstrates the use of the friend function.
//					Compile use: g++ driver.cpp Employee.cpp
//============================================================================

#include <iostream>
#include "Employee.h"

using namespace std;

// MAIN METHOD RUNS THE PROGRAM
int main()
{
	Employee emp;							// Creates an empty Emloyee object
	emp.print();							// Prints it for demonstration

	Employee emp2("unknown", 10, '?', 0);	// Uses consructor to initialize
	emp2.GetInfo();							// Asks user to enter the information
	SetSalary(emp2);						// Calculates salary based on information
	emp2.print();							// Prints the Employees information & salary
	return 0;								// Exits the program
}

// SetSalary function sets salary based on experience and position (Friend of Employee)
void SetSalary(Employee& e)
{
	if(e.empPosition == 'E' && e.yearOfExp < 2)				// If Entry level with less than 2 years of experience
	{
		e.salary = 50000;	// Salary $50,000
	}
	else if(e.empPosition == 'E' && e.yearOfExp >= 2)		// If entry level with more than 2 years of experience
	{
		e.salary = 55000;	// Salary $55,000
	}
	else if(e.empPosition == 'P' && e.yearOfExp < 4)		// If Project Leader with less than 4 years of experience
	{
		e.salary = 60000;	// Salary $60,000
	}
	else if(e.empPosition == 'P' && e.yearOfExp >= 4)		// If Project Leader with more than 4 years of experience
	{
		e.salary = 65000; 	// Salary $65,000
	}
	else if(e.empPosition == 'M')							// If manager
	{
		e.salary = 70000;	// Salary $70,000
	}
	else if(e.empPosition == 'D')							// If Director
	{
		e.salary = 80000;	// Salary $80,000
	}
	else
	{
			cout << "Invalid Position." << endl;
	}
}
// END OF DRIVER