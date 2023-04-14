/*Task16. Write a function that determines the arithmetic mean of the elements of the array passed to it*/

#include <iostream>

using namespace std; 

int calculateSum(int arr[], int size);
double calculateMean(int arr[], int size);

int main() {

    int arr[5];  // Array to store 5 numbers
    cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++) {

        cin >> arr[i];  // User input for array elements
    }

    double mean = calculateMean(arr, 5);  // Calculate arithmetic mean
    cout << "Arithmetic mean: " << mean << endl;  // Display mean

}

// Recursive function to calculate the sum of array elements
int calculateSum(int arr[], int size) {

    if (size == 0) {

        return 0;  // Base case: If array size is 0, return 0
    }
    else {

        return arr[size - 1] + calculateSum(arr, size - 1);  // Recursive call
    }
}

// Recursive function to calculate the arithmetic mean of array elements
double calculateMean(int arr[], int size) {

    if (size == 0) {

        return 0.0;  // Base case: If array size is 0, return 0.0
    }
    else {

        return static_cast<double>(calculateSum(arr, size)) / size;  // Recursive call
    }
}
