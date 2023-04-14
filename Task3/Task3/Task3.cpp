/*Task3. Write a function that calculates the factorial of the number passed to it*/

#include <iostream>
#include <string>
using namespace std;

// This is the function prototype for the factorial function
int factorial(int num);

// main function
int main() {

	int num = 0;
	cout << "enter number: " << endl;
	cin >> num;
	cout << "factorial for number " << num << " is " << factorial(num) << endl;// This calls the factorial function and displays the result.
}
//factorial function
int factorial(int num) {

	int fact = 1;

	// This is a for loop that iterates through each integer from 1 up to and including the input
	for (int i = 1; i <= num; i++) {

		// This multiplies the current factorial value by the current integer in the iteration.
		fact *= i;
	}
	return fact;
}
