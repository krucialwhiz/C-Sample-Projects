/* Write a program that lets the user enter the total rainfall for each of 12 months into an array of doubles.
* The program should calculate and display the total rainfall for the year, the average monthly rainfall,
* and the months with the high and low amounts. The program should also display a list of months,
* sorted in order of rainfall, from high to low.
*
* Input Validation: Do not accept negative numbers for monthly rainfall figures.
*/

// preprocessor directive s
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// main function
int main() {

	// variables
	const int MONTHS = 12;
	string name[MONTHS] = { "January","February","March","April","May","June",
		"July","August","September","October","November","December" }; // array of months
	int counter = 0;
	double rain[MONTHS]; // array to record inches of rain per month
	double avgYearRain;
	double year = 0;
	double high;
	double low;
	string highestMonth;
	string lowestMonth;

	// for loop used to asked user the amount of inches of rain for each month
	for (counter = 0; counter < MONTHS; counter++) {
		cout << "How many inches of rain does " << name[counter] << " have?: ";
		cin >> rain[counter];
		while (rain[counter] < 0) {
			cout << "Please enter a number greater than 0.\n";
			cin >> rain[counter];
		}
	}

	// for loop used to add all the inches together from each month
	for (counter = 0; counter < MONTHS; counter++) {
		year += rain[counter];
	}
	avgYearRain = year / MONTHS;

	cout << "\n";

	cout << left << " -------------------------------------------------\n";
	cout << setw(20) << left << "Months" << setw(20) << "Inches of Rainfall\n";
	cout << left << "--------------------------------------------------\n";

	// for loop used to display each month along with its inches of rain
	for (counter = 0; counter < MONTHS; counter++) {
		cout << setw(20) << left << name[counter]
			<< setw(20) << rain[counter] << "\n";
	}
	cout << left << " -------------------------------------------------\n";

	// finds month with the highest amount of rain
	high = rain[1];
	for (counter = 0; counter < MONTHS; counter++) {
		if (rain[counter] > high) {
			highestMonth = name[counter];
			high = rain[counter];
		}
	}

	// finds month with the lowest amount of rain
	low = rain[1];
	for (counter = 0; counter < MONTHS; counter++) {
		if (rain[counter] < low) {
			lowestMonth = name[counter];
			low = rain[counter];
		}
	}

	// outputs total yearly rainfaill, average monthly rainfall, highest and lowest months
	cout << "\n";
	cout << setprecision(2) << showpoint << fixed;
	cout << "Total Rainfall for the year: " << year << " inches\n";
	cout << "Monthly average rainfall: " << avgYearRain << " inches\n";
	cout << "Month with highest amount of rainfall : "
		<< highestMonth << " with " << high << " inches.\n";
	cout << "Month with lowest amount of rainfall: "
		<< lowestMonth << " with " << low << " inches.\n";

	cout << "\n";

	return 0;
}// end of main 
