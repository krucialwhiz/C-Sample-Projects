/* Write a function that returns an integer and accepts a pointer to a C-string as an argument.
* The function should count the number of characters in the string and return that number.
* Demonstrate the function in a simple program that asks the user to input a string,
* passes it to the function, and then displays the function’s return value.
*/

// preprocessor directives
#include<iostream>
#include<string>

using namespace std;

// stringCount function
int stringCount(char* str) {
	int count = 0;

	// counts how many characters are in the array
	for (count; str[count] != 0; count++) {
	}
	return count;
}

// main function
int main(){
	char string[100];

	// accepts string input and read it to the char array
	cout << "Enter string: ";
	cin.getline(string, 100);

	// declare variable and assigns stringCount function to it 
	int strCount;
	strCount = stringCount(string);

	// outputs the string and the number of characters in that string
	cout << "\nString: " << string << "\n";
	cout << "Number of charaters in the string: " << strCount << ".\n";

	return 0;
}// end of main function
