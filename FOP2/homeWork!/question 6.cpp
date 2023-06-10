#include <iostream>
#include <math.h>
using namespace std;
double hypotenuse(double side1, double side2);
int main()
{
    double side1, side2;
    cout << "Enter the first side: ";
    cin >> side1;
    cout << "Enter the second side: ";
    cin >> side2;
    cout << "The hypotenuse is " << hypotenuse(side1, side2) << endl;
    return 0;
}

double hypotenuse(double side1, double side2)
{
    return pow((pow(side1, 2) + pow(side2, 2)), 0.5);
}
