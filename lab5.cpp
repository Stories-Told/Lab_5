#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Global variables
// x = mean
// s = standard deviation
// x1-x5 = user input numbers
double x, s, x1, x2, x3, x4, x5;

// Calculate the mean giving user input
double Calculate_Mean(double x1, double x2, double x3, double x4, double x5)
{
    x = (x1 + x2+ x3+ x4+ x5) / 5;

    return x;
}

// Calculate the Standard Deviation giving user input
double Calculate_Standard_Deviation(double x1, double x2, double x3, double x4, double x5)
{
    s = (pow((x1 - x), 2.0) + pow((x2 - x), 2.0) + pow((x3 - x), 2.0) +
        pow((x4 - x), 2.0) + pow((x5 - x), 2.0)) / 5;

    sqrt(s);

    return s;
}

int main()
{
    cout << "--------------------------------------\n";
    cout << "Mean and Standard Deviation Calculator\n";
    cout << "--------------------------------------\n\n";

    // Ask user for number inputs
    cout << "Please enter 5 numbers...\n";

    cout << "Enter x1: ";
    cin >> x1;
    cout << endl;

    cout << "Enter x2: ";
    cin >> x2;
    cout << endl;

    cout << "Enter x3: ";
    cin >> x3;
    cout << endl;

    cout << "Enter x4: ";
    cin >> x4;
    cout << endl;

    cout << "Enter x5: ";
    cin >> x5;
    cout << endl;

    // Output the Calculations
    cout << "------------------------------------------\n";
    cout << "Mean: " << Calculate_Mean(x1, x2, x3, x4, x5) << endl;
    cout << "Standard Deviation: " << Calculate_Standard_Deviation(x1, x2, x3, x4,x5) << endl;
    cout << "-------------------------------------------\n";


    return 0;
}
