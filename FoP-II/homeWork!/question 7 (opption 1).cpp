#include <iostream>
using namespace std;
double multiplier(double num1, double num2);
int main()
{
    int limit;
    double num1, num2 = 1;
    cout << "How many numbers are going to multiply? \n user: ";
    cin >> limit;
    for(int i=1; i<limit; i++)
    {
        cin >> num1;
        num2 = multiplier(num1, num2);
        if(i==limit){
            cout << "product: " << num2 << endl;
        }
    }

    return 0;
}

double multiplier(double num1 = 1, double num2 = 1)
{
    return num1 * num2;
}
