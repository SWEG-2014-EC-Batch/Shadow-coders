/*PLAYING WITH NUMBERS
a) Prints the reverses of the number (e.g. input = 4637215 Output=5217364).*/

#include <iostream>

using namespace std;

int main()
{
int num,reverse;
int num2=num;
cout<<" Please enter a number"<<endl;
cin>>num;
while(num)
{reverse=(reverse*10)+num%10;
num/=10;
}
{cout<<"The reverse is "<<reverse;
}
    return 0;
}
