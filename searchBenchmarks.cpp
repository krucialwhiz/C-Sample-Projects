/* Write a program that has an array of at least 20 integers.
* It should call a function that uses the linear search algorithm to locate one of the values.
* The function should keep a count of the number of comparisons it makes until it finds the value.
* The program then should call a function that uses the binary search algorithm to locate the same value. \
* It should also keep count of the number of comparisons it makes. Display these values on the screen.
*/

// preprocessor directives
#include <iostream>

using namespace std;

int linearCount = 1;
int binaryCount = 0;

// linear search function
int linearSearch(int array[], int size, int searchValue) {
	int countLinear = 0;
	int i = 0;

	for (int i = 0; i<size; i++) {
		if (searchValue == array[i]) {
			return i;
		}
		linearCount++;
	}
	return -1;

	countLinear++;
}

// binary search function
int binarySearch(int array[], int size, int searchValue) {
	int low = 0;
	int high = size - 1;
	int mid;

	do {
		mid = (low + high) / 2;

		if (searchValue == array[mid]) {
			return mid;
		}
		else if (searchValue > array[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
		binaryCount++;
	} while (low <= high);
	return -1;
} 

// main function
int main() {
	int const arraySize = 26;
	int actualArray[] = { 1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49,51 };
	int searchNumber;

	cout << "Enter the number you are searching for: ";
	cin >> searchNumber;

	// linearSearch function call
	int linearResult = linearSearch(actualArray, arraySize, searchNumber);
	// binarySearch function call
	int binaryResult = binarySearch(actualArray, arraySize, searchNumber);


	cout << "\n-----------Linear Search--------------\n";
	if (linearResult >= 0) {
		cout << "The number " << actualArray[linearResult] << " was found at " 
			<< linearResult << "  index  " << "\n";	
	} else {
		cout << "The number " << searchNumber << " was not found." << "\n";
	}
	cout << "Number of comparisons were: " << linearCount << "\n";


	cout << "\n------------Binary Search-------------\n";
	if (binaryResult >= 0) {
		cout << "The number " << actualArray[binaryResult] << " was found at "
			<< binaryResult << "  index  " << "\n";
	}
	else {
		cout << "The number " << searchNumber << " was not found." << "\n";
	}
	cout << "Number of comparisons were: " << binaryCount << "\n";

	return 0;
}
