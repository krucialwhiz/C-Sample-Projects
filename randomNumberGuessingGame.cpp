/* Write a program that generates a random number and asks the user to guess what the number is.
* If the user’s guess is higher than the random number, the program should display “Too high, try again.”
* If the user’s guess is lower than the random number, the program should display “Too low, try again.”
* The program should use a loop that repeats until the user correctly guesses the random number.
*
* You should also keep a count of the number of guesses that the user makes.
* When the user correctly guesses the random number, the program should display the number of guesses.
*/

// preprocessor directives
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// main function
int main() {

	// variables
	int randomNumber;
	int guessAttempts = 1;
	int guess;

	// random number generator generates a random number from 1 - 20
	srand(time(0));
	for (int i = 0; i < 20; i++) {
		randomNumber = (rand() % 20) + 1;
	}

	// do while loop accepts a number from 1 -20
	do {
		cout << "Guess a number from 1 to 20: ";
		cin >> guess;

		/* if else statements tests if guess is too high, too low or is equal to
		the random number and outputs the result
		*/
		if (guess > randomNumber) {
			cout << "Too high, try again !!!\n\n";
		}
		else if (guess < randomNumber) {
			cout << "Too low, try again!!!\n\n";
		}
		else if (guess == randomNumber) {
			cout << "\nCongratulations!!! You gueesed it. Number of guesses: " 
				<< guessAttempts << "\n";
		}
		guessAttempts++;
	} while ((guess != randomNumber)); // end of do while loop

	return 0;
}// end of main function
