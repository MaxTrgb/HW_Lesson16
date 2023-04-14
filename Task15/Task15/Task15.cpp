/*Task15. Write a function that takes two dates (that is, the function takes six parameters) 
and calculates the difference in days between those dates. 
To accomplish this task, you must also write a function that determines whether a year is a leap year*/

#include <iostream>

using namespace std;

bool isLeapYear(int year);
int daysInMonth(int month, int year);
int dateDifference(int day1, int month1, int year1, int day2, int month2, int year2);

int main() {

    // Input dates from user
    int day1, month1, year1, day2, month2, year2;
    cout << "Enter first date (dd mm yyyy): ";
    cin >> day1 >> month1 >> year1;

    cout << "Enter second date (dd mm yyyy): ";
    cin >> day2 >> month2 >> year2;

    // Call the dateDifference function to get the difference in days
    int difference = dateDifference(day1, month1, year1, day2, month2, year2);

    // Output the difference in days
    cout << "The difference in days between the two dates is: " << difference << " days" << endl;
}
// Function to check if a year is a leap year
bool isLeapYear(int year) {

    // A year is a leap year if it is divisible by 4
    // but not divisible by 100, unless it is also divisible by 400
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {

        return true;
    }
    else {

        return false;
    }
}

// Function to get the number of days in a month
int daysInMonth(int month, int year) {

    // Array to store the number of days in each month
    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // If it's a leap year and the month is February, update the number of days
    if (month == 2 && isLeapYear(year)) {

        return 29;
    }
    else {

        return days[month - 1];
    }
}

// Function to calculate the difference in days between two dates
int dateDifference(int day1, int month1, int year1, int day2, int month2, int year2) {

    // Calculate the total number of days in the first date
    int totalDays1 = year1 * 365 + day1;
    for (int i = 1; i < month1; i++) {

        // Add the number of days in each month to the total days
        totalDays1 += daysInMonth(i, year1);
    }
    // Add an extra day for leap year if the month is after February
    totalDays1 += isLeapYear(year1) && month1 > 2 ? 1 : 0;

    // Calculate the total number of days in the second date
    int totalDays2 = year2 * 365 + day2;

    for (int i = 1; i < month2; i++) {

        // Add the number of days in each month to the total days
        totalDays2 += daysInMonth(i, year2);
    }
    // Add an extra day for leap year if the month is after February
    totalDays2 += isLeapYear(year2) && month2 > 2 ? 1 : 0;

    // Calculate the difference in days between the two dates
    int difference = totalDays2 - totalDays1;

    return difference;
}