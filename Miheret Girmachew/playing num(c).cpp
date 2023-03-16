//c) Find the sum of the digits of the a given number (e.g. input=4,823 sum=17)

#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int number;

    cout<<"Please enter a number."<<endl;
    cin>>number;

    while(number)
    {
        sum += number % 10;
        number /= 10;
    }
    cout<<"The sum of the digits of the number is "<<sum<<endl;

    return 0;
}
