/* Create a change-counting game that gets the user to enter the number of coins required
* to make exactly one dollar. The program should ask the user to enter the number of pennies,
* nickels, dimes, and quarters. If the total value of the coins entered is equal to one dollar,
* the program should congratulate the user for winning the game. Otherwise, the program should display
* a message indicating whether the amount entered was more than or less than one dollar.
*/

// preprocessor directive
#include <iostream>

using namespace std;

// main function
int main() {

	// variables
	int pennyCount, nickelCount, dimeCount, quaterCount;

	const float PENNY = 0.01;
	const float NICKEL = 0.05;
	const float DIME = 0.10;
	const float QUATER = 0.25;

	float dollarTotal;

	// input for the amount of pennies, nickels, dimes and quarters
	cout << "Enter the amount of pennies: ";
	cin >> pennyCount;

	cout << "Enter the amount of nickels: ";
	cin >> nickelCount;

	cout << "Enter the amount of dimes: ";
	cin >> dimeCount;

	cout << "Enter the amount of quaters: ";
	cin >> quaterCount;

	// calculates 1 dollar 
	dollarTotal = (PENNY * pennyCount) + (NICKEL * nickelCount) +
		(DIME * dimeCount) + (QUATER * quaterCount);

	// tests if the amount entered is below, above or equal to 1 dollar and displys the result
	if (dollarTotal == 1.00) {
		cout << "\nCongratulations !!! You have won the game !!!\n";
	}
	else if (dollarTotal < 1.00) {
		cout << "\nSorry !!! The amount you entered is less than $1 !!!\n";
	}
	else {
		cout << "\nSorry !!! The amount you entered is more than $1 !!!\n";
	}

	return 0;
}// end of main function
