/* Write a program that asks the user to enter the monthly costs for the following expenses
* incurred from operating his or her automobile: loan payment, insurance, gas, oil, tires, and maintenance.
* The program should then display the total monthly cost of these expenses,
* and the total annual cost of these expenses.
*/

// preprocessor directives
#include <iostream>
#include <iomanip>

using namespace std;

// main function
int main() {

	// variables
	float loanPayment, insurance, gas, oil, tires, maintenance;
	float monthlyTotal, yearlyTotal;

	cout << "Enter the monthly cost for each of the following expenses \n\n";

	// input for all monthly expenses
	cout << "Loan Payment: $";
	cin >> loanPayment;
	cout << "Insurance: $";
	cin >> insurance;
	cout << "Gas: $";
	cin >> gas;
	cout << "Oil: $";
	cin >> oil;
	cout << "Tires: $";
	cin >> tires;
	cout << "Maintenance: $";
	cin >> maintenance;

	cout << "\n";

	// all calculations for monthly and yearly expenses
	monthlyTotal = loanPayment + insurance + gas + oil + tires + maintenance;
	yearlyTotal = monthlyTotal * 12;

	cout << fixed << showpoint << setprecision(2);

	cout << left << setw(20) << "Expenses";
	cout << left << setw(20) << "Monthly Cost";
	cout << left << setw(20) << "Yearly Cost";
	cout << "\n";

	cout << "----------------------------------------------------" <<"\n";

	cout << left << setw(20) << "Loan Payment";
	cout << left << "$" << setw(20) << loanPayment;
	cout << left << "$" << setw(20) << loanPayment * 12;
	cout << "\n";

	cout << left << setw(20) << "Insurance";
	cout << left << "$" <<setw(20) << insurance;
	cout << left << "$" << setw(20) << insurance * 12;
	cout << "\n";

	cout << left << setw(20) << "Gas";
	cout << left << "$" << setw(20) << gas;
	cout << left << "$" << setw(20) << gas * 12;
	cout << "\n";

	cout << left << setw(20) << "Oil";
	cout << left << "$" << setw(20) << oil;
	cout << left << "$" << setw(20) << oil * 12;
	cout << "\n";

	cout << left << setw(20) << "Tires";
	cout << left << "$" << setw(20) << tires;
	cout << left << "$" << setw(20) << tires * 12;
	cout << "\n";

	cout << left << setw(20) << "Maintenance";
	cout << left << "$" << setw(20) << maintenance;
	cout << left << "$" << setw(20) << maintenance * 12;
	cout << "\n";
	cout << "\n";

	cout << left << setw(20) << "Total";
	cout << left << "$" << setw(20) << monthlyTotal;
	cout << left << "$" << setw(20) << yearlyTotal;
	cout << "\n";

	// displays the monthly and yearly costs
	cout << "\nMonthly Cost: $" << monthlyTotal << "\n"
		<< "Annual Cost: $" << yearlyTotal << "\n";

	return 0;
}// end of main function
