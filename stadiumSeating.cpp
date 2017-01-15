/* There are three seating categories at a stadium.
* For a baseball game, Class A seats cost $15, Class B seats cost $12, and Class C seats cost $9.
* Write a program that asks how many tickets for each class of seats were sold,
* then displays the amount of income generated from ticket sales.
* Format your dollar amount in fixed-point notation, with two decimal places of precision.
*/

// preprocessor directives
#include <iostream>
#include <iomanip>

using namespace std;

// main function
int main() {

	// variables
	const int seatA = 15;
	const int seatB = 12;
	const int seatC = 9;
	
	int inputA, inputB, inputC;
	float total;

	// input for tickets
	cout << "\tCost of Tickets" << "\n";
	cout << "------------------------------------------" << "\n";
	cout << "Class A: $15\t Class B: $12\t Class C: $9" << "\n\n";

	cout << "Enter the number of class A seat tickets needed: ";
	cin >> inputA;

	cout << "Enter the number of class B seat tickets needed: ";
	cin >> inputB;

	cout << "Enter the number of class C seat tickets needed: ";
	cin >> inputC;

	// calculates total income from tickets
	total = (seatA * inputA) + (seatB * inputB) + (seatC * inputC);

	// output total ticket prices and sets it at 2 decimal places
	cout << fixed << setprecision(2) << showpoint;
	cout << "\nTotal income from tickets are: $" << total << "\n";

	return 0;
}// end of main function

