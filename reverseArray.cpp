/*
* Write a function that accepts an int array and the array’s size as arguments.
* The function should create a copy of the array, except that the element values
* should be reversed in the copy. The function should return a pointer to the new array.
* Demonstrate the function in a complete program.
*/

// preprocessor directives
#include <iostream>

using namespace std;

void showReverseArray(int values[], int size) {
	// Make nums point to values.
	int *nums = values;     

	// Display the elements in the original array.
	cout << "The elements of the original array are: \n";

	// Displaying the first element of the array.
	cout << *nums << " ";

	// Making nums point to the subsequent elements
	while (nums < &values[size - 1]){
		nums++;
		// Display the subsequent elements
		cout << *nums << " ";
	}

	cout << "\n\nThe elements of the reversed array are: \n";
	cout << *nums << " ";  // To display the first element

	while (nums > values) {
		// Move backward to the previous element.
		nums--;               
		// Display the elements that nums point to.
		cout << *nums << " ";
	}
	cout << "\n";
}

// main function
int main(){

	const int SIZE = 7;
	int numbers[SIZE] = { 2, 34, 11, 155, 69, 101, 0 };

	// function call
	showReverseArray(numbers, SIZE);

	return 0;
}
