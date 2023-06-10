#include <iostream>
using namespace std;

double getProduct(int num1, double num2);

int main()
{
    int firstNum;
    double secondNum;
    cout << "enter the fist number: ";
    cin >> firstNum;
    cout << "enter the second number: ";
    cin >> secondNum;
    double product = getProduct(firstNum, secondNum);
    cout << firstNum << " * " << secondNum << " = " << product << endl;
    return 0;
}

double getProduct(int num1, double num2)
{
    return num1 * num2;
}
