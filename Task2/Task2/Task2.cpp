/*Task2. Write a function that returns the cube of a number*/

#include <iostream>
#include <string>
using namespace std;

// This is the function prototype for the cube function.
int cube(int num);

// main function
int main() 
{
	int num;
	cout << "enter the number: "; cin >> num;

	cout << "result: " << cube(num); // This calls the cube function and displays the result.
}

// This is the cube function 
int cube(int num) {

	num = (num * num) * num;
	return num;
}
