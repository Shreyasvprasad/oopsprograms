#include <iostream>
using namespace std;
// Forward declaration of class WIFE
class WIFE;
class HUSBAND {
private:
    double incomeHusband; // Private data member to store husband's income
public:
    HUSBAND(double income) : incomeHusband(income) {} // Constructor to initialize income
    friend double calculateTotalIncome(HUSBAND husband, WIFE wife); // Friend function declaration
};
class WIFE {
private:
    double incomeWife; // Private data member to store wife's income
public:
    WIFE(double income) : incomeWife(income) {} // Constructor to initialize income
    friend double calculateTotalIncome(HUSBAND husband, WIFE wife); // Friend function declaration
};
// Friend function to calculate total income of the family
double calculateTotalIncome(HUSBAND husband, WIFE wife) {
    double totalIncome = husband.incomeHusband + wife.incomeWife;
    return totalIncome;
}
int main() {
    double husbandIncome, wifeIncome;
cout << "Enter husband's income: ";
cin >> husbandIncome;
cout << "Enter wife's income: ";
cin >> wifeIncome;
    HUSBAND husband(husbandIncome);
    WIFE wife(wifeIncome);
    double totalIncome = calculateTotalIncome(husband, wife);
cout << "Total family income: $" << totalIncome << endl;
    return 0;
}
