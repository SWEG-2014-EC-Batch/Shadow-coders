/*k) Check whether a number is Perfect number or not.
[Hint]: A Perfect Number is an integer where the sum of its divisors minus the number
itself equals the number*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
   int number,sum;

   cout<<"Please enter a number."<<endl;
   cin>>number;
   for(int i = 1;i<number;i++)
    {
      if (number % i == 0){
      sum += i;}
   }

   if (sum == number){
      cout<<"The number is a perfect number."<<endl;
   }
   else{
      cout<<"The number is not perfect number."<<endl;
   }
   return 0;
}
