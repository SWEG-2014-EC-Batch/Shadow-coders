#include <iostream>
using namespace std;
double multiplier(double num1, double num2);
int main()
{
    double num1, num2 = 1;
    while (1 == 1)
    {
        cin >> num1;
        num2 = multiplier(num1, num2);
        cout << "product: " << num2 << endl;
    }

    return 0;
}

double multiplier(double num1 = 1, double num2 = 1)
{
    return num1 * num2;
}