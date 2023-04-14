/*Task11. Write a function that takes an array and sorts it. The sorting algorithm is your choice
I use recursive function to perform insertion sort */

#include <iostream>

using namespace std;

void insertionSort(int arr[], int n);

int main() {

    int arr[5];
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {

        cin >> arr[i]; // Input 5 numbers from the user
    }

    cout << "Original Array: ";
    for (int i = 0; i < 5; i++) {

        cout << arr[i] << " "; // Display the original array
    }

    insertionSort(arr, 5); // Call the insertion sort function to sort the array

    cout << "\nSorted Array: ";
    for (int i = 0; i < 5; i++) {

        cout << arr[i] << " "; // Display the sorted array
    }

}
// Recursive function to perform insertion sort
void insertionSort(int arr[], int n) {

    // Base case: if only one element is left
    if (n <= 1) {

        return; // No sorting required, return to previous call
    }

    // Sort the first n-1 elements recursively
    insertionSort(arr, n - 1);

    // Move the last element to its correct position in the sorted subarray
    int key = arr[n - 1]; // Store the last element as the key
    int j = n - 2; // Index of the second-to-last element

    while (j >= 0 && arr[j] > key) { // Compare and shift elements to the right

        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key; // Place the key in its correct position
}
