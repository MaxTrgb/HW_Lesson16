/*Task14. Write a function for the quadratic equation (ax² + bx + c = 0). 
The function returns one or two roots of the equation, or no roots if there are no roots. 
A, b and c are passed to the function*/

#include <iostream>
#include <cmath>

using namespace std;

void solveQuadraticEquation(double a, double b, double c);

int main() {
    // Variables to store coefficients
    double a, b, c;

    // Prompt the user to enter coefficients
    cout << "Enter the coefficients of the quadratic equation (ax^2 + bx + c = 0):" << endl;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    // Call the function to solve the quadratic equation
    solveQuadraticEquation(a, b, c);

}
void solveQuadraticEquation(double a, double b, double c) {

    // Calculate the discriminant of the quadratic equation
    double discriminant = b * b - 4 * a * c;

    // Check if the discriminant is positive
    if (discriminant > 0) {

        // Calculate and print two real roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two real roots: " << root1 << " " << root2 << endl;
    }
    // Check if the discriminant is zero
    else if (discriminant == 0) {

        // Calculate and print one real root
        double root1 = -b / (2 * a);
        cout << "One real root: " << root1 << endl;
    }
    // If discriminant is negative, there are no real roots
    else {

        cout << "No real roots" << endl;
    }
}