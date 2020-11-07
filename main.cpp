#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    char op;

    cout << "Enter a number1: ";
    cin >> num1;

    cout << "Enter a number2: ";
    cin >> num2;
    
    cout << "Enter a operator: ";
    cin >> op;

    switch (op)
    {
        case "+":
        cout << num1 + num2;
        break;
        case "-":
        cout << num1 - num2;
        break;
        case "*":
        cout << num1 * num2;
        break;
        case "/":
        cout << num1 / num2;
        break;
        default:
        cout << "Invalid number!!!"
        break;
    }

    return 0;
}