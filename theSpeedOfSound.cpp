/* The following table shows the approximate speed of sound in air, water, and steel.
*  Medium		Speed
Air			1,100 feet per second
Water		4,900 feet per second
Steel       16,400 feet per second
*
* Write a program that displays a menu allowing the user to select air, water, or steel.
* After the user has made a selection, he or she should be asked to enter the distance
* a sound wave will travel in the selected medium. The program will then display the amount of time it will take.
* (Round the answer to four decimal places.)
* Input Validation: Check that the user has selected one of the available choices from the menu.
* Do not accept distances less than 0.
*/

// preprocessor directives
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

// main function
int main() {

	// variables
	int choice;
	float mediumDistance, speed;

	const int AIR_LENGTH = 1100;
	const int WATER_LENGTH = 4900;
	const int STEEL_LENGTH = 16400;

	// shows options and accepts a valid choice
	do {
		cout << "\nOption\t Medium\t Speed \n\n";
		cout << "1.\t Air\t 1,100 ft/s \n";
		cout << "2.\t Water\t 4,900 ft/s \n";
		cout << "3.\t Steel\t 16,400 ft/s \n";

		cout << "\nSelect an option from the above choices given: ";
		cin >> choice;
		system("cls");
	} while (choice < 1 || choice > 3);

	cout << fixed << showpoint << setprecision(4);

	// choices calculates and displays the output depending on the choice made
	switch (choice) {
	case 1:
		do {
			cout << "\nEnter the distance of the sound wave will travel in air: ";
			cin >> mediumDistance;
		} while (mediumDistance < 0);

		speed = mediumDistance / AIR_LENGTH;
		cout << "\nTime traveled in air: " << speed << " secs\n";
		break;
	case 2:
		do {
			cout << "\nEnter the distance of the sound wave will travel in water: ";
			cin >> mediumDistance;
		} while (mediumDistance < 0);

		speed = mediumDistance / WATER_LENGTH;
		cout << "\nTime traveled in water: " << speed << " secs\n";
		break;
	case 3:
		do {
			cout << "\nEnter the distance of the sound wave will travel in steel: ";
			cin >> mediumDistance;
		} while (mediumDistance < 0);

		speed = mediumDistance / STEEL_LENGTH;
		cout << "\nTime traveled in steel: " << speed << " secs\n";
		break;
	}

	return 0;
}// end of main function
