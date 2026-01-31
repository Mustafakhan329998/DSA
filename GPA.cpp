#include <iostream>
using namespace std;

// Function to convert marks into grade points
float gradePoint(int marks)
{
    if (marks >= 85) return 4.0;
    else if (marks >= 80) return 3.7;
    else if (marks >= 75) return 3.3;
    else if (marks >= 70) return 3.0;
    else if (marks >= 65) return 2.7;
    else if (marks >= 60) return 2.3;
    else if (marks >= 55) return 2.0;
    else if (marks >= 50) return 1.0;
    else return 0.0;
}

int main()
{
    int marks[6];
    float totalPoints = 0;
    int creditHours[6] = {3, 3, 3, 4, 3, 3}; // Programming = 4 CH
    int totalCH = 19;

    cout << "Enter marks for 6 subjects:\n";
    cout << "1. Expository Writing\n";
    cout << "2. ICT\n";
    cout << "3. Applied Physics\n";
    cout << "4. Programming Fundamentals\n";
    cout << "5. Basic Mathematics\n";
    cout << "6. Introduction to Management\n\n";

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];

        totalPoints += gradePoint(marks[i]) * creditHours[i];
    }

    float GPA = totalPoints / totalCH;

    cout << "\n-------------------------";
    cout << "\nYour GPA is: " << GPA;
    cout << "\n-------------------------";

    return 0;
}
