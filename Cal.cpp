#include <iostream>
using namespace std;

// Addition
double add(double a, double b)
{
    return a + b;
}

// Subtraction
double subtract(double a, double b)
{
    return a - b;
}

// Multiplication
double multiply(double a, double b)
{
    return a * b;
}

// Division
double divide(double a, double b)
{
    if (b == 0)
    {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

int main()
{
    double no1, no2;
    char operater;
    bool continueCalc = true;
    char choice;

    cout << "Welcome to the Simple C++ Calculator!" << endl;

    while (continueCalc)
    {
        // Input first number
        cout << "Enter first number: ";
        cin >> no1;

        // Input operator
        cout << "Enter operation (+, -, *, /): ";
        cin >> operater;

        // Input second number
        cout << "Enter second number: ";
        cin >> no2;

        // Perform calculation based on the operator
        switch (operater)
        {
        case '+':
            cout << no1 << " + " << no2 << " = " << add(no1, no2) << endl;
            break;
        case '-':
            cout << no1 << " - " << no2 << " = " << subtract(no1, no2) << endl;
            break;
        case '*':
            cout << no1 << " * " << no2 << " = " << multiply(no1, no2) << endl;
            break;
        case '/':
            cout << no1 << " / " << no2 << " = " << divide(no1, no2) << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
            break;
        }

        // Ask the user if they want to continue
        cout << "Do you want to perform another calculation? press y for yes or N for no: ";
        cin >> choice;

        if (choice == 'n' || choice == 'N')
        {
            continueCalc = false;
            cout << "Exiting calculator. Goodbye!" << endl;
        }
    }

    return 0;
}