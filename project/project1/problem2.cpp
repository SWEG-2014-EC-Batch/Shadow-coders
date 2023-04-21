#include <iostream>
#include<math.h>
using namespace std;
int main() {
cout<<"Enter a number: ";
    int num=9;
    
for(int i = 0; i < (2*num +1); i++)//calculates the number of rows
{
 for(int j = 0; j < (num*2 + 1); j++){//calculates the number of columns
   int num1 = num-abs(num - j);
   int num2 = num-abs(num - i);
 
     if (num1 + num2 <= num){
                cout<<num1<<" ";
            }
    else {//to create the daimond hallow with in the square of numbers
        cout<<"  ";
    }
 }
        cout<<endl;
    }
return 0;
}
