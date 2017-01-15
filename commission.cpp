/* TDC Company gives out high commission to all workers if their sales are greater
* than $4000.00. Write a program that will prompt the user to input a worker’s sale. 
* If their sales are greater or $4000.00 then 60% commission will be given. 
* If workers’ sales are less than $4000.00, a 30% commission is given. 
* Output the appropriate result.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	// variables
	const float COM_SIXTY = 0.6;
	const float COM_THIRTY = 0.3;

	float workerSale = 0;
	float workerCommission = 0;
	float totalCommission = 0;
	
	cout << "Enter the worker's sales: $";
	cin >> workerSale;

	if (workerSale > 4000) {
		workerCommission = (workerSale * COM_SIXTY); 
		totalCommission = (workerSale * COM_SIXTY) + workerSale;
		cout << "The worker's commission is: $" << workerCommission << "\n";
		cout << "The worker's total is: $" << totalCommission << "\n";
	}else {
		workerCommission = (workerSale * COM_THIRTY);
		totalCommission = (workerSale * COM_THIRTY) + workerSale;
		cout << "The worker's commission is: $" << workerCommission << "\n";
		cout << "The worker's total is: $" << totalCommission << "\n";
	}

	return 0;
}
