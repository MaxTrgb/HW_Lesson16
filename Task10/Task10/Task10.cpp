/*Task 10. Write a function that takes a list of strings and returns a list of those strings that are less than or equal to 5 characters long*/

#include <iostream>
#include <string>

using namespace std;

// Recursive function to filter strings
void filterStrings(const string* input, int inputSize, string* output, int& outputSize, int index = 0) {

    // Base case: if index is greater than or equal to the size of the input array, return
    if (index >= inputSize) {

        return;
    }

    // Recursive case: check if the current string at the given index is less than or equal to 5 characters long
    filterStrings(input, inputSize, output, outputSize, index + 1); 

    if (input[index].length() <= 5) {

        // If the current string is less than or equal to 5 characters long, add it to the output array
        output[outputSize++] = input[index];
    }
}

int main() {

    // Input list of strings
    string inputStrings[100]; // Assuming a maximum of 100 input strings
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        cout << "Enter string #" << i + 1 << ": ";
        cin >> inputStrings[i];
    }

    // Call the filterStrings function
    string filteredStrings[100]; // Assuming a maximum of 100 filtered strings
    int filteredSize = 0;
    filterStrings(inputStrings, n, filteredStrings, filteredSize);

    // Output filtered strings
    cout << "Filtered strings (less than or equal to 5 characters long): ";
    for (int i = 0; i < filteredSize; i++) {

        cout << filteredStrings[i] << " ";
    }
    cout << endl;
}