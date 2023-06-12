//e) Prints the first and the last digit of the number and find their sum.

#include <iostream>

using namespace std;

int main()
{
   int number,first_digit,last_digit,sum;
   cout<<"Please enter a number."<<endl;
   cin>>number;
   last_digit = number% 10;
   while(number){
      first_digit = number% 10;
      number /= 10;
   }
   sum = first_digit + last_digit;

   cout<<"The first digit of the number is "<<first_digit<<endl;
   cout<<"The last digit of the number is "<<last_digit<<endl;
   cout<<"The sum of the first and last digit is "<<sum<<endl;
    return 0;
}
