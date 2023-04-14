/*Task5. Write a function that checks whether the number passed to it is prime. A number is called prime if it is divisible
without a balance, only for yourself and for the unit*/

#include <iostream>
using namespace std;

// Function to check if a number is prime 
bool isPrime(int num, int divisor = 2) {
    
    if (num <= 2) {
        // Numbers less than or equal to 2 are prime only if they are equal to 2
        return (num == 2);
    }

    if (num % divisor == 0) {
        // If the number is divisible by the current divisor, it is not prime
        return false;
    }

    if (divisor * divisor > num) {
        // If the square of the divisor is greater than the number, it is prime
        return true;
    }

    
    // Call the isPrime() function recursively with an incremented divisor
    return isPrime(num, divisor + 1);
}

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        // If isPrime() returns true, the number is prime
        cout << num << " is a prime number." << endl;
    }
    else {
        // If isPrime() returns false, the number is not prime
        cout << num << " is not a prime number." << endl;
    }
}