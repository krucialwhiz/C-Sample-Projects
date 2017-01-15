/* Mary bought 750 shares of stock at a price of $35.00 per share.
* She must pay her stockbroker a 2 percent commission for the transaction.
* Write a program that calculates and displays the following:
*
•	The amount paid for the stock alone (without the commission)
•	The amount of the commission
•	The total amount paid (for the stock plus the commission)
*/

// preprocessor directive
#include <iostream> 

using namespace std;

// main function
int main() {

	// variables
	int shares = 750; // number of shares 
	int pricePerShare = 35; // price for each share
	const float COMMISSION = 0.02; // commission at 2%

	float shareTotal, commissionTotal, totalStocks;

	// cost of total shares without commission 
	shareTotal = shares * pricePerShare;

	// shares commission percentage
	commissionTotal = COMMISSION * shareTotal;

	// cost of total shares with commission 
	totalStocks = shareTotal + commissionTotal;

	// Output
	cout << "Amount paid for stock (without commission): $" << shareTotal << "\n";
	cout << "Amount of commission: $" << commissionTotal << "\n";
	cout << "Total amount paid (stock + commission): $" << totalStocks << "\n";

	return 0;
} // end of main function
