/*Task1. Write a function to find the largest of two numbers*/

#include <iostream>
#include <string>
using namespace std;

// Function prototype for compareNum function
int compareNum(int num1, int num2);

// Main function
int main()
{
	// Declaring variables 
	int num1, num2;
	cout << "Enter two numbers to compare: " << endl;

	// enter two numbers to compare
	cin >> num1;
	cin >> num2;

	// Calling compareNum function and outputting the result
	cout << compareNum(num1, num2) << " is bigger" << endl;
}

// Definition of compareNum function
int compareNum(int num1, int num2) {

	if (num1 < num2) {

		return num2;
	}
	return num1;
}
