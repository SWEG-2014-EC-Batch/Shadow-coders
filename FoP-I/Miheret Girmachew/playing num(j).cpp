/*j) Check if a number is Strong or not.
[Hint]: A Strong number is a number, where the sum of the factorial of the digits is equal
to the number itself.*/

#include<iostream>
#include<cmath>

using namespace std;
int main()
{
   int sum = 0;
   int number1,number2;

   cout<<"Please enter a number."<<endl;
   cin>>number1;

   number2 = number1;
   while(number1){
      sum += pow(number1 % 10,3);
      number1 /= 10;
   }

   if (sum!= number2){
         cout<<"The number is not Armstrong"<<endl;
   }
   else{
         cout<<"The number is Armstrong"<<endl;
   }
   return 0;
}

