#include <iostream>
using namespace std;
// Template function for Bubble Sort
template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int choice;
    cout << "Choose sorting type:" << endl;
    cout << "1. Integers" << endl;
    cout << "2. Doubles" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1: {
            int intSize;
            cout << "Enter the number of integers: ";
            cin >> intSize;
            int intArr[intSize];
            cout << "Enter " << intSize << " integers: ";
            for (int i = 0; i < intSize; ++i) {
                cin >> intArr[i];
            }
            bubbleSort(intArr, intSize);
            cout << "Sorted integers: ";
            for (int i = 0; i < intSize; ++i) {
                cout << intArr[i] << " ";
            }
            cout << endl;
            break;
        }
        case 2: {
            int doubleSize;
            cout << "Enter the number of doubles: ";
            cin >> doubleSize;
            double doubleArr[doubleSize];
            cout << "Enter " << doubleSize << " doubles: ";
            for (int i = 0; i < doubleSize; ++i) {
                cin >> doubleArr[i];
            }
            bubbleSort(doubleArr, doubleSize);
            cout << "Sorted doubles: ";
            for (int i = 0; i < doubleSize; ++i) {
                cout << doubleArr[i] << " ";
            }
            cout << endl;
            break;
        }
        default:
            cout << "Invalid choice." << endl;
            break;
    }
    return 0;
}
