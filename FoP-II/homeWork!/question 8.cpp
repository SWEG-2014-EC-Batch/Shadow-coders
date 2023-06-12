#include <iostream>
#include <math.h>
using namespace std;
bool isPrime(int num);
int main()
{
    int num;
    cout << "Please enter the number you want to check: ";
    cin >> num;
    if (isPrime(num) == true)
    {
        cout << num << " is a prime number \n";
    }
    else
    {
        cout << num << " is not a prime number \n";
    }
    return 0;
}

bool isPrime(int num)
{
    int tester = 0;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            tester++;
        }
    }
    if (tester == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}