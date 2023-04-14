/*Task7. Write a recursive function that reverses the order of the elements of the array passed to it*/

#include <iostream>

using namespace std;  // Adding "using namespace std" directive

void reverseArray(int& start, int& end, int arr[]);

int main() {
    const int arrSize = 5;
    int arr[arrSize];

    // Input array elements from the user
    cout << "Enter " << arrSize << " elements for the array: ";  // Using "cout" without "std::"
    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];  // Using "cin" without "std::"
    }

    // Display original array
    cout << "Original Array: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";  // Using "cout" without "std::"
    }
    cout << endl;  // Using "endl" without "std::"

    int start = 0;
    int end = arrSize - 1;

    // Call the reverseArray function to reverse the array
    reverseArray(start, end, arr);

    // Display reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";  // Using "cout" without "std::"
    }
    cout << endl;  // Using "endl" without "std::"
}
void reverseArray(int& start, int& end, int arr[]) {
    if (start >= end) {
        return;  // base case: when start >= end, no more elements to reverse
    }

    // Swap the elements at start and end
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursively reverse the remaining elements
    reverseArray(++start, --end, arr);
}