#include <iostream>
using namespace std;

void calculator() {
    double num1, num2;
    char operation;

    cout << "Simple Calculator" << endl;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero" << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
    }
}

int main() {
    calculator();
    return 0;
}


