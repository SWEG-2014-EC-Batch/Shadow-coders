//f) Swap the first and the last digit of the number.

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int number1,number2,first_digit,last_digit,sum,no_of_digits = 0;

   cout<<"Please enter a number."<<endl;
   cin>>number1;

   number2 = number1;
   last_digit = number1 % 10;

   while(number1){
      first_digit = number1 % 10;
      number1 /= 10;
      no_of_digits += 1;
   }

   number2 -= last_digit - first_digit;
   number2 -= (first_digit-last_digit)*(pow(10,no_of_digits-1));

   cout<< number2;
   return 0;
}
