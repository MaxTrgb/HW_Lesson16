/*Task4. Write a function that displays a rectangle with height N and width K on the screen*/

#include <iostream>
#include <string>
using namespace std;

// This is the function prototype
int createRectangle(int N, int K);

//main function
int main()
{
    int N, K;

    cout << "enter heigh: "; cin >> N;
    cout << "enter width: "; cin >> K;
    createRectangle(N, K);  // This calls the createRectangle function with the input values for height and width.
}

// This is the createRectangle function that takes two integer parameters for height and width and displays a rectangle.
int createRectangle(int N, int K) {

    // This is a nested for loop that prints out asterisks to form a rectangle on the screen.
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}