/* Write a program that calculates the average number of days a company’s employees are absent.
* The program should have the following functions:
*	•	A function called by main that asks the user for the number of employees in the company.
*		This value should be returned as an int. (The function accepts no arguments.)
*	•	A function called by main that accepts one argument: the number of employees in the company.
*		The function should ask the user to enter the number of days each employee missed during the past year.
*		The total of these days should be returned as an int.
*	•	A function called by main that takes two arguments: the number of employees in the company
*		and the total number of days absent for all employees during the year.
*		The function should return, as a double, the average number of days absent.
*		(This function does not perform screen output and does not ask the user for input.)
*/

// preprocessor directive 
#include <iostream>

using namespace std;

// funtion prototypes
int numOfEmployees();
int numofDaysMissing(int);
double avgDaysWorked(int, int);

// main function
int main(){

	// variables
	int employees;
	int total;
	double average;

	// functions called in main
	employees = numOfEmployees();
	total = numofDaysMissing(employees);
	average = avgDaysWorked(employees, total);

	// outputs average days employees are absent
	cout << "\nThe average number of days a company's employees are absent is: " 
		<< average <<"\n\n";
	return 0;
}// end of main 

// function for number of employees
int numOfEmployees(){
	int workers;
	cout << "Enter the number of employees in the company: ";
	cin >> workers;
	cout << "\n";
	return workers;
}

// function for the number of days missed
int numofDaysMissing(int w){
	int workers = w;
	int total = 0;
	int absent;

	for (int employeeNum = 0; employeeNum < workers; employeeNum++){
		cout << "Number of days employee " << employeeNum + 1 << " missed: ";
		cin >> absent;
		total += absent;

		while (absent < 0){
			cout << "Please, do not enter negative number! Try again: ";
			cin >> absent;
		}
	}
	return total;
}

// function for average number of days absent
double avgDaysWorked(int work, int totl){
	int w = work;
	int t = totl;
	double avg;

	avg = (w * 365) / t;
	return avg;
}
