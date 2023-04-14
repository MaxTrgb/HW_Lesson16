/*Task12. Imagine that a snail climbs a tree a foot every day. The snail then slides down b feet each night. The height of the tree is h feet. Write a function that returns the number of days it will take the snail to reach the top of the tree.
If the snail cannot reach the top of the tree, output the message Impossible.*/

#include <iostream>

using namespace std;

// Function to calculate the number of days to reach the top of the tree
int daysToReachTopOfTree(int h, int a, int b);

// Main function
int main() {

    int h, a, b;
    cout << "Enter the height of the tree: ";
    cin >> h;

    cout << "Enter the climbing distance during the day: ";
    cin >> a;

    cout << "Enter the sliding distance during the night: ";
    cin >> b;

    // Call the function to calculate the number of days
    int days = daysToReachTopOfTree(h, a, b);

    // Display the result
    if (days == -1) {

        cout << "Impossible" << endl;
    }
    else {

        cout << "Number of days to reach the top of the tree: " << days << endl;
    }

    return 0;
}

// Recursive function to calculate the number of days to reach the top of the tree
int daysToReachTopOfTree(int h, int a, int b) {
    if (h <= 0) {

        // Base case: snail has reached or passed the top of the tree
        return 0;
    }
    else if (a <= b) {

        // Base case: snail cannot climb higher than sliding down each night
        return -1;
    }
    else {

        // Snail climbs during the day
        int climbed = a - b;

        // Snail slides down during the night
        int slid = b;

        // Recursive call to daysToReachTopOfTree with updated height
        return 1 + daysToReachTopOfTree(h - climbed, a, b);
    }
}
