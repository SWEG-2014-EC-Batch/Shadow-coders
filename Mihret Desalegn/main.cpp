#include <iostream>
#include<math.h>

using namespace std;

int main()
{
   char gender,retry,quit;
int no_u;
int option;
int q = 1;
float bmi,height,weight;


    cout<<"menu: "<<endl;
    cout<<"enter 1 for 1 user"<<endl;
    cout<<"enter 2 for known number of users"<<endl;
    cout<<"enter 3 for unknown number of users"<<endl;
    cin>>option;

    switch(option)
    {
    case 1 :
        cout<<"Please specify your gender. Type M for male, F for female. ";
    cin>>gender;

    if(gender == 'F'||gender == 'f')
        {
            cout<<"Please enter your weight in kilograms";
            cin>>weight;
            cout<<"Now enter your height in meters ";
            cin>>height;

            bmi = weight/pow(height,2);

            if(bmi>=18.0 && bmi<=23.0)
                {
                    cout<<"Your BMI is "<<bmi<<" which is normal."<<endl<<"Press any key to start again.";

                }
            else if(bmi<18.0)
                {
                    cout<<"Your BMI is "<<bmi<<" which is below the recommended weight.";
                }
            else
                {
                     cout<<"Your BMI is "<<bmi<<" which is above the recommended weight.";
                }

        }

    else if(gender == 'M'||gender == 'm')
        {
            cout<<"Please enter your weight in kilograms ";
            cin>>weight;
            cout<<"Now enter your height in meters ";
            cin>>height;

            bmi = weight/pow(height,2);

            if(bmi>=20.0 && bmi<=25.0)
                {
                    cout<<"Your BMI is "<<bmi<<" which is normal.";
                }
            else if(bmi<20.0)
                {
                    cout<<"Your BMI is "<<bmi<<" which is below the recommended weight.";
                }
            else
                {
                     cout<<"Your BMI is "<<bmi<<" which is above the recommended weight.";
                }



        }

    else
        {
            cout<<"\a Invalid input. Please try again\n";


        }
        break;
     case 2 :
        cout<<"Please enter the number of users";
    cin>>no_u;
    for(int i =1; i<=no_u;i++)
   {
        cout<<"Please specify your gender. Type M for male, F for female. ";
        cin>>gender;

    if(gender == 'F'||gender == 'f')
        {
            cout<<"Please enter your weight in kilograms ";
            cin>>weight;
            cout<<"Now enter your height in meters ";
            cin>>height;

            bmi = weight/pow(height,2);

            if(bmi>=18.0 && bmi<=23.0)
                {
                    cout<<"Your BMI is "<<bmi<<" which is normal."<<endl<<"Press any key to start again.";

                }
            else if(bmi<18.0)
                {
                    cout<<"Your BMI is "<<bmi<<" which is below the recommended weight.";
                }
            else
                {
                     cout<<"Your BMI is "<<bmi<<" which is above the recommended weight.";
                }

        }

    else if(gender == 'M'||gender == 'm')
        {
            cout<<"Please enter your weight in kilograms ";
            cin>>weight;
            cout<<"Now enter your height in meters ";
            cin>>height;

            bmi = weight/pow(height,2);

            if(bmi>=20.0 && bmi<=25.0)
                {
                    cout<<"Your BMI is "<<bmi<<" which is normal.";
                }
            else if(bmi<20.0)
                {
                    cout<<"Your BMI is "<<bmi<<" which is below the recommended weight.";
                }
            else
                {
                     cout<<"Your BMI is "<<bmi<<" which is above the recommended weight.";
                }



        }

    else
        {
            cout<<"\a Invalid input. Please try agian\n";


        }
        }

        break;
    case 3 :

    while(q ==1)
   {
        cout<<"\n Please specify your gender. Type M for male, F for female. ";
    cin>>gender;

    if(gender == 'F'||gender == 'f')
        {
            cout<<"Please enter your weight in kilograms ";
            cin>>weight;
            cout<<"Now enter your height in meters ";
            cin>>height;

            bmi = weight/pow(height,2);

            if(bmi>=18.0 && bmi<=23.0)
                {
                    cout<<"Your BMI is "<<bmi<<" which is normal."<<endl<<"Press any key to start again.";

                }
            else if(bmi<18.0)
                {
                    cout<<"Your BMI is "<<bmi<<" which is below the recommended weight.";
                }
            else
                {
                     cout<<"Your BMI is "<<bmi<<" which is above the recommended weight.";
                }

        }

    else if(gender == 'M'||gender == 'm')
        {
            cout<<"Please enter your weight ";
            cin>>weight;
            cout<<"Now enter your height ";
            cin>>height;

            bmi = weight/pow(height,2);

            if(bmi>=20.0 && bmi<=25.0)
                {
                    cout<<"Your BMI is "<<bmi<<" which is normal.";
                }
            else if(bmi<20.0)
                {
                    cout<<"Your BMI is "<<bmi<<" which is below the recommended weight.";
                }
            else
                {
                     cout<<"Your BMI is "<<bmi<<" which is above the recommended weight.";
                }



        }

    else{
            cout<<"\a Invalid input. Please try again\n";


        }
        cout<<"If you want to quit the program press 'q' if not press any key "<<endl;
        cin>>quit;

        if(quit=='Q'||quit=='q')
            {
                q=q+1;
            }
        }

        break;

        default:
        cout<<"invalid input"<<endl;
    }
    return 0;
}
