/*Task8. Write a function that accepts a list of integers and returns a list of the same numbers, but without repetitions*/

#include <iostream>

using namespace std;

void removeDuplicates(int arr[], int& size, int index);

int main() {
    const int size = 5;
    int arr[size];

    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {

        cin >> arr[i];
    }

    int newSize = size;
    removeDuplicates(arr, newSize, 0); // Call the function to remove duplicates

    cout << "Array without duplicates: ";
    for (int i = 0; i < newSize; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;
}
// Function to remove duplicates from an array recursively
void removeDuplicates(int arr[], int& size, int index) {

    // Base case: if index reaches the last element, return
    if (index == size - 1) {

        return;
    }

    // Iterate through elements after the current index
    for (int i = index + 1; i < size; i++) {

        // If a duplicate is found
        if (arr[index] == arr[i]) {

            // Shift elements to remove the duplicate
            for (int j = i; j < size - 1; j++) {

                arr[j] = arr[j + 1];
            }
            size--; // Decrease the size of the array
            i--;    // Decrement i to account for the shifted elements
        }
    }

    // Recursively call the function with the next index
    removeDuplicates(arr, size, index + 1);
}