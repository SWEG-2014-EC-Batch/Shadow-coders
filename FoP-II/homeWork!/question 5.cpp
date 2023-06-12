#include <iostream>
#include <math.h>
using namespace std;
double calculations(double num1, double num2);
int main()
{
    double firstNum, secondNum, answer;
    cout << "Enter the fist number: ";
    cin >> firstNum;
    cout << "Enter the second number: ";
    cin >> secondNum;
    answer = calculations(firstNum, secondNum);
    cout << endl
         << firstNum << "^3 + " << secondNum << "^(1/2) = " << answer << endl;
    return 0;
}

double calculations(double num1, double num2)
{
    return pow(num1, 3) + sqrt(num2);
}
