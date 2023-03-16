//d) Find the product of even digits of the a given number (e.g. input=4,923 prod=8)

#include<iostream>
using namespace std;
int main()
{
    int total = 1;
    int number,digit;

    cout<<"Please enter a number."<<endl;
    cin>>number;
    while(number)
    {
        digit = number % 10;
        if( digit % 2 == 0)
        {
            total *= digit;
        }
        number/= 10;
    }
    cout<<"The total product of the even digits is "<<total<<endl;
    return 0;
}
