#include <iostream>
using namespace std;
// Function to swap the values of two variables by value
void swapValues(int a, int b) {
    // Create a temporary variable to hold the value of 'a'
    int temp = a;
    // Assign the value of 'b' to 'a'
    a = b;
    // Assign the temporary value to 'b', effectively swapping the values
    b = temp;
    cout << "Inside swapping function : x = " << a<< ", y = " << b << endl;
}
int main() {
    // Declare and initialize two integer variables
    int x = 5, y = 10;

    // Display the values before swapping
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    // Call the swapValues function, but it won't affect the original variables
    swapValues(x, y);
    // Display the values after swapping, which remain unchanged
    cout << "After swapping: x = " << x << ", y = " << y << endl;
    return 0;
}
