#include <iostream>
#include <cmath>
using namespace std;

// Addition Function
double add(double a, double b)
{
    return a + b;
}

// Subtraction Function
double subtract(double a, double b)
{
    return a - b;
}

// Multiplication Function
double multiply(double a, double b)
{
    return a * b;
}

// Division Function
double divide(double a, double b)
{
    if (b == 0)
    {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

// Power Function
double power(double a, double b)
{
    return pow(a, b);
}

int main()
{
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /, ^): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
        case '+':
            cout << "Result = " << add(num1, num2);
            break;

        case '-':
            cout << "Result = " << subtract(num1, num2);
            break;

        case '*':
            cout << "Result = " << multiply(num1, num2);
            break;

        case '/':
            if (num2 == 0)
            {
                cout << "Error! Division by zero is not allowed.";
            }
            else
            {
                cout << "Result = " << divide(num1, num2);
            }
            break;

        case '^':
            cout << "Result = " << power(num1, num2);
            break;

        default:
            cout << "Invalid operator!";
    }

    return 0;
}