/* Update your BMI calculator so that it will print out the BMI for each gender verifying
that whether the BMI shows normal weight, over weight or under weight.*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  float W,H,BMI;//W= weight,H=height,BMI=body mass index
  char G; //G=gender
  int k;

  for(;;){
    cout<<"Please enter your weight in kilograms."<<endl;
    cin>>W;
    cout<<"Please enter your height in meters."<<endl;
    cin>>H;
    cout<<"Please enter your gender, ( F or f) for female and ( M OR m) for male."<<endl;
    cin>>G;

     BMI=W/pow(H,2);

      if (G=='F' || G=='f')
        {
         if(BMI<18.5 && BMI>=0.0)
            cout<<"Your BMI is "<<BMI<<" and you are under weight."<<endl;
         else if(BMI>=18.5 && BMI<=24.9)
            cout<<"Your BMI is "<<BMI<<" and You are normal weight."<<endl;
         else if(BMI>=25.0 && BMI<=29.9)
            cout<<"Your BMI is "<<BMI<<" and You are over weight."<<endl;
         else if(BMI>=30.0)
            cout<<"Your BMI is "<<BMI<<" and You are obesity."<<endl;}
      else if(G=='M' && G=='m')
         {if(BMI<18.5 && BMI>=0.0)
            cout<<"Your BMI is "<<BMI<<" and You are under weight."<<endl;
         else if(BMI>=18.5 && BMI<=24.9)
            cout<<"Your BMI is "<<BMI<<" and You are normal weight."<<endl;
         else if(BMI>=25.0 && BMI<=29.9)
            cout<<"Your BMI is "<<BMI<<" and You are over weight."<<endl;
         else if(BMI>=30.0)
            cout<<"Your BMI is "<<BMI<<" and You are obesity."<<endl;}
      else
         cout<<"You have inserted a wrong character gender.";

      cout<<"Insert 0 to quit or any key to continue."<<endl;
      cin>>k;
      if(k==0)
        {
        break;
        }




  }


    return 0;
}

