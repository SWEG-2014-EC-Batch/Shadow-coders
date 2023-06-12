//g) Check whether a number is palindrome or not

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
   int number1,number2,reversed = 0;
   bool palendrome;

   cout<<"Please enter a number."<<endl;
   cin>>number1;

   number2 = number1;
   while(number1){
      reversed = reversed*10 + number1 %10;
      number1 /=10;
   }
   if (number2 == reversed){
      cout<<"The number is palindrome";
   }
   else{
      cout<<"The number is not palindrome";
   }
   return 0;
}
