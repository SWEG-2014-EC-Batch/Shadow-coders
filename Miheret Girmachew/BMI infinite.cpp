// Update your BMI calculator so that it can be used for infinite number of people.
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  float Weight,Height,BMI;
  char Gender;
  int k;

  for(;;){
    cout<<"Please enter your weight in kilograms."<<endl;
    cin>>Weight;
    cout<<"Please enter your height in meters."<<endl;
    cin>>Height;
    cout<<"Please enter your gender, ( F or f) for female and ( M OR m) for male."<<endl;
    cin>>Gender;

     BMI=Weight/pow(Height,2);

      if (Gender=='F' || Gender=='f')
        {
         if(BMI<18.5 && BMI>=0.0)
            cout<<"Your BMI is "<<BMI<<" and you are under weight."<<endl;
         else if(BMI>=18.5 && BMI<=24.9)
            cout<<"Your BMI is "<<BMI<<" and You are normal weight."<<endl;
         else if(BMI>=25.0 && BMI<=29.9)
            cout<<"Your BMI is "<<BMI<<" and You are over weight."<<endl;
         else if(BMI>=30.0)
            cout<<"Your BMI is "<<BMI<<" and You are obesity."<<endl;}
     else if(Gender=='M' && Gender=='m')
         {
         if(BMI<18.5 && BMI>=0.0)
            cout<<"Your BMI is "<<BMI<<" and You are under weight."<<endl;
         else if(BMI>=18.5 && BMI<=24.9)
            cout<<"Your BMI is "<<BMI<<" and You are normal weight."<<endl;
         else if(BMI>=25.0 && BMI<=29.9)
            cout<<"Your BMI is "<<BMI<<" and You are over weight."<<endl;
         else if(BMI>=30.0)
            cout<<"Your BMI is "<<BMI<<" and You are obesity."<<endl;}
      else
         cout<<"You have inserted a wrong character gender.";

      cout<<"Press 0 to quit or any key to continue."<<endl;
      cin>>k;
      if(k==0)
        {
        break;
        }




  }


    return 0;
}

