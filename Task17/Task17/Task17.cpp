/*Task17. Write a function that determines the number of positive, negative and zero elements of the array passed to it.*/

#include <iostream>

using namespace std;  

void countPositiveNegativeZero(int arr[], int size, int& positiveCount, int& negativeCount, int& zeroCount);

int main() {

    int arr[5];
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    // Input values for the array
    cout << "Enter 5 numbers separated by spaces: ";
    for (int i = 0; i < 5; i++) {

        cin >> arr[i];
    }

    // Call the recursive function to count positive, negative, and zero elements
    countPositiveNegativeZero(arr, 5, positiveCount, negativeCount, zeroCount);

    // Display the results
    cout << "Positive count: " << positiveCount << endl;
    cout << "Negative count: " << negativeCount << endl;
    cout << "Zero count: " << zeroCount << endl;

}
// Recursive function to count positive, negative, and zero elements in an array
void countPositiveNegativeZero(int arr[], int size, int& positiveCount, int& negativeCount, int& zeroCount) {
    // Base case: if the size of the array is 0, return
    if (size == 0) {

        return;
    }

    // Check the sign of the first element of the array
    if (arr[0] > 0) {

        positiveCount++;  // Increment positive count
    }
    else if (arr[0] < 0) {

        negativeCount++;  // Increment negative count
    }
    else {

        zeroCount++;  // Increment zero count
    }

    // Recursively call the function on the remaining elements of the array
    countPositiveNegativeZero(arr + 1, size - 1, positiveCount, negativeCount, zeroCount);
}