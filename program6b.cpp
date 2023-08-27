#include <iostream>
using namespace std;

class MarkCalculator; // Forward declaration

class Student
{
private:

string name;
float marks[3]; // Array to store three marks

public:

void get_data()

{
cout << "Enter student name: ";
cin >> name;

cout << "Enter three marks: ";

for (int i = 0; i < 3; i++)
{
cin >> marks[i]; // Inputting three marks
}
}

void display()

{

cout << "Name: " << name << endl; // Displaying student's name
}

friend class MarkCalculator; // Allowing MarkCalculator class to access private members
};

class MarkCalculator
{
public:

static float mark_avg(const Student& student)

{
float sum = 0;
for (int i = 0; i < 3; i++)
{
sum += student.marks[i]; // Calculating the sum of marks
}
return sum / 3; // Calculating and returning the average of marks
}
};

int main()
{

Student student;
student.get_data(); // Getting student data (name and marks)
student.display(); // Displaying student's name

float average = MarkCalculator::mark_avg(student); // Calculating average marks

cout << "Average marks: " << average << endl; // Displaying the average marks

return 0;
}
