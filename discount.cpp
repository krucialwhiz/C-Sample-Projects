/* Calculate the discount given to a customer based on what is purchased. 
 * The customer purchased three items; find the sum of the three prices to get the total price.
 *  If the total is below $50.00, the customer will receive no discount. 
 * If the total price is over $55.00, he will receive a 10% discount. 
 * If the total price is over $300.00 the customer will receive a 15% discount. 
 * For any other purchase over $310.00, the customer will get a 20% discount. 
 * The program should show the discount and the discounted price on the receipt.
 */

#include <iostream>

using namespace std;

int main() {

	const float DISCOUNT_TEN = 0.1;
	const float DISCOUNT_FIFTEEN = 0.15;
	const float DISCOUNT_TWENTY = 0.2;

	float item1 =0, item2 =0, item3 =0;
	float itemTotal = 0;

	cout << "Enter the price of the item: $";
	cin >> item1;

	cout << "Enter the price of the item: $";
	cin >> item2;

	cout << "Enter the price of the item: $";
	cin >> item3;

	itemTotal = item1 + item2 + item3;

	if (itemTotal <= 55) {
		cout << "Discount: $0.00 \n" << "Total: $" << itemTotal << "\n";
	} else if (itemTotal > 55 && itemTotal < 300) {
		cout << "Discount: $"<< (DISCOUNT_TEN * itemTotal) <<"\n" 
			<< "Total: $" << itemTotal - (DISCOUNT_TEN * itemTotal) << "\n";
	} else if (itemTotal > 300 && itemTotal < 310) {
		cout << "Discount: $" << (DISCOUNT_FIFTEEN * itemTotal) << "\n"
			<< "Total: $" << itemTotal - (DISCOUNT_FIFTEEN * itemTotal) << "\n";
	} else {
		cout << "Discount: $" << (DISCOUNT_TWENTY * itemTotal) << "\n"
			<< "Total: $" << itemTotal - (DISCOUNT_TWENTY * itemTotal) << "\n";
	}

	return 0;
}
