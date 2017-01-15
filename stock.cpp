/* Value Mart Supermarket is keeping track of the number of stocks or items they have. 
* Write an algorithm to keep track of how many of the items remain at the end of the day
* if the initial quantity was 457. Input the quantity bought at each purchase; 
* calculate the total amount sold and the quantity remaining, 
* if the number of sales and quantity purchased is not known in advance. 
* Terminate the data by entering 0 for quantity.  
*/

#include <iostream>

using namespace std;

int main() {

	int stock = 457;
	int quantity = -1;
	int netStock = 0;

	while (quantity != 0) {
		cout << "\nEnter the number of items: ";
		cin >> quantity;

		netStock = stock - quantity;

		cout << "\n\nThe number of items purchased from the stock was: " << quantity << "\n"
			<< "Number of items left in the stock is: " << netStock << "\n";

		stock = netStock;
	}
	exit(0);

	return 0;
}
