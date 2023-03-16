/* Make a program that calculates and display the Body Mass Index(BMI) of a person. The program should
read the height and weight of a person being given and display the BMI.*/
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    float Weight,Height,BMI;

    cout<<"Please enter your weight in kilograms."<<endl;
    cin>>Weight;
    cout<<"Please enter your height in meters."<<endl;
    cin>>Height;

      BMI=Weight/pow(Height,2);

    cout<<"Your BMI is "<<BMI;

    return 0;
}
