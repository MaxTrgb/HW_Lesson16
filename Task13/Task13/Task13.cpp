/*Task13. The function should receive: the number of people and the number of slices in the pizza. 
Then the program should output the minimum number of pizzas (not zero) so that everyone has an equal number of pieces and there is no extra.*/

#include <iostream>
#include <cmath> // For using the ceil() function

using namespace std;

int calculateMinimumPizzas(int people, int slicesPerPizza); // Function prototype

int main() {
    // Input values
    int people, slicesPerPizza;
    cout << "Enter the number of people: ";
    cin >> people;
    cout << "Enter the number of slices per pizza: ";
    cin >> slicesPerPizza;
    // Call function
    int pizzasNeeded = calculateMinimumPizzas(people, slicesPerPizza);

    cout << "Number of pizzas needed: " << pizzasNeeded << endl;
}

// Function to calculate the minimum number of pizzas needed
int calculateMinimumPizzas(int people, int slicesPerPizza) {

    int slicesNeeded = people * 2; // Each person needs 2 slices

    int pizzasNeeded = ceil((double)slicesNeeded / slicesPerPizza); // Round up to get the minimum number of pizzas
                                                                    // ceil() function from the <cmath> library rounds up the result of dividing slicesNeeded by slicesPerPizza
    return pizzasNeeded;
}