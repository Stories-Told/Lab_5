#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Forward declarations to calculate mean and SD
double Calculate_Mean(double x1, double x2, double x3, double x4, double x5);
double Calculate_Standard_Deviation(double x1, double x2, double x3, double x4, double x5);

int main()
{
    // Variables for user input and to calculate mean and SD
    double x1, x2, x3, x4, x5, mean, standardDeviation;

    // Tell the user what this program is
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

    // Output the Calculations for mean and SD
    cout << "------------------------------------------\n";
    cout << "Mean: " << Calculate_Mean(x1, x2, x3, x4, x5) << endl;
    cout << "Standard Deviation: " << fixed << setprecision(3) << Calculate_Standard_Deviation(x1, x2, x3, x4,x5) << endl;
    cout << "-------------------------------------------\n";


    return 0;
}

// Calculate the mean giving user input
double Calculate_Mean(double x1, double x2, double x3, double x4, double x5)
{
    // Calculates mean
    double mean = (x1 + x2+ x3+ x4+ x5) / 5;

    return mean;
}

// Calculate the Standard Deviation giving user input
double Calculate_Standard_Deviation(double x1, double x2, double x3, double x4, double x5)
{
    // Calculate mean using the function
    double mean = Calculate_Mean(x1, x2, x3, x4, x5);

    // Calculate SD
    double standardDeviation = (pow((x1 - mean), 2.0) + pow((x2 - mean), 2.0) + pow((x3 - mean), 2.0) +
                                pow((x4 - mean), 2.0) + pow((x5 - mean), 2.0)) / 5;

    // Square root SD
    standardDeviation = sqrt(standardDeviation);

    return standardDeviation;
}
