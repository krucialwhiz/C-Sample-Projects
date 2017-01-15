/* Write a function named “CoinToss” that simulates the tossing of a coin.
* When you call the function, it should generate a random number in the range of 1 through 2.
* If the random number is 1, the function should display “heads.”
* If the random number is 2, the function should display “tails.”
* Demonstrate the function in a program that asks the user how many times
* the coin should be tossed and then simulates the tossing of the coin that number of times.
*/

// preprocessor directive s
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// function that simulates a coin toss
void CoinToss() {
	int randomNumber;

	randomNumber = (rand() % 2) + 1;

	if (randomNumber == 1) {
		cout << "heads";
	}
	else if (randomNumber == 2) {
		cout << "tails";
	}
}

// main function
int main() {
	srand(time(0)); // helps generate a different result everytime coinToss function is called to main

	// variables
	int coinTossCount, numOfToss;

	// input: asks users to flip coin "x" number of times
	cout << "How many times do you want to flip the coin?: ";
	cin >> numOfToss;

	// for loop outputs the toss number and the result of each toss
	for (coinTossCount = 1; coinTossCount <= numOfToss; coinTossCount++) {
		cout << "Toss number " << coinTossCount << " : ";
		CoinToss();
		cout << "\n";
	}

	return 0;
}// end of main function
