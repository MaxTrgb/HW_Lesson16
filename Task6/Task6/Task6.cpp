/*Task 6. Write a function that determines the minimum and maximum (value and number) of the elements of the array passed to it*/

#include <iostream>

using namespace std;

//declare findMinMaxRecursive function
void findMinMaxRecursive(int arr[], int start, int end, int& minValue, int& maxValue, int& minIndex, int& maxIndex);

int main() {

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size]; // Dynamically allocate memory for the array
    cout << "Enter the elements of the array: ";

    for (int i = 0; i < size; i++) {

        cin >> arr[i]; // Input elements of the array from user
    }

    int minValue, maxValue, minIndex, maxIndex;
    findMinMaxRecursive(arr, 0, size - 1, minValue, maxValue, minIndex, maxIndex); // Call the recursive function to find min/max

    // Display 
    cout << "Minimum Value: " << minValue << " at index: " << minIndex << endl; 
    cout << "Maximum Value: " << maxValue << " at index: " << maxIndex << endl; 

    delete[] arr; // Free dynamically allocated memory
}
void findMinMaxRecursive(int arr[], int start, int end, int& minValue, int& maxValue, int& minIndex, int& maxIndex) {
    // Base case: If only one element remains, set it as both min and max
    if (start == end) {
        minValue = arr[start];
        maxValue = arr[start];
        minIndex = start;
        maxIndex = start;
        return;
    }

    // Divide the array into two halves and find min/max in each half
    int mid = (start + end) / 2;
    int leftMin, leftMax, leftMinIndex, leftMaxIndex;
    int rightMin, rightMax, rightMinIndex, rightMaxIndex;
    findMinMaxRecursive(arr, start, mid, leftMin, leftMax, leftMinIndex, leftMaxIndex);
    findMinMaxRecursive(arr, mid + 1, end, rightMin, rightMax, rightMinIndex, rightMaxIndex);

    // Compare the min/max values from left and right halves
    if (leftMin < rightMin) {
        minValue = leftMin;
        minIndex = leftMinIndex;
    }
    else {
        minValue = rightMin;
        minIndex = rightMinIndex;
    }

    if (leftMax > rightMax) {
        maxValue = leftMax;
        maxIndex = leftMaxIndex;
    }
    else {
        maxValue = rightMax;
        maxIndex = rightMaxIndex;
    }
}