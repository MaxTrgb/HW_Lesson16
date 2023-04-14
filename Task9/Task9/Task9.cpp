/*Task9. The function should output an electronic clock screen for a given value of seconds since midnight. 
Output format: h:mm:ss (possible values: [0:00:00; 23:59:59]).
Additional task: try to solve the problem without using if statements and loops.*/

#include <iostream>
#include <iomanip> // for setfill() and setw() functions

using namespace std;

void printClockScreen(int secondsSinceMidnight);

int main() {

    int seconds;
    cout << "Enter the number of seconds since midnight: ";
    cin >> seconds;

    printClockScreen(seconds);// Call the 'printClockScreen()' function with the input 'seconds' as argument

}

void printClockScreen(int secondsSinceMidnight) {

    // Calculate hours, minutes, and seconds
    int hours = secondsSinceMidnight / 3600; // 3600 seconds in an hour
    int minutes = (secondsSinceMidnight % 3600) / 60; // 60 seconds in a minute
    int seconds = secondsSinceMidnight % 60; // remaining seconds

    // Perform arithmetic operations to limit the values within the valid range
    secondsSinceMidnight %= 86400; // 86400 seconds in a day
    hours = (hours + 24) % 24; // Add 24 and take modulo 24 to ensure hours are within [0, 23]
    minutes %= 60; // Take modulo 60 to ensure minutes are within [0, 59]
    seconds %= 60; // Take modulo 60 to ensure seconds are within [0, 59]

    // Output the clock screen
    cout << setfill('0');
    cout << setw(2) << hours << ':' << setw(2) << minutes << ':' << setw(2) << seconds << endl;
}