#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1); // Allowing spaces in input
    cout << "Enter the second string: ";
    getline(cin, str2);
    string temp=str1;
     temp.append(str2); // Using the append() function to concatenate strings
    cout << "Concatenated string: " << temp << endl;
    return 0;
}
