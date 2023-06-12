/*Write a C++ program to calculate the Net-Pay of an employee as follow after deduction
of pension (7%) and tax. The program should read the gross salary, worked hours, and
income tax rate. If the employee worked hours exceed 40 hrs., the program prompts
the user to enter an over-time bonus rate/hour and find the bonus payment by
multiplying the extra hours worked with the provided bonus rate.
net Salary = (gross Salary – pension – income tax) + Overtime payment*/

#include <iostream>

using namespace std;

int main()
{
    float grossSalary,workedHour,tax,bonusRate,netSalary,overtimePayment=0,incometax,income;
    int emplyNumber;
    const float pension =0.07;

    cout<<"Please enter number of employ "<<endl;
    cin>>emplyNumber;
    for(int i =1;i<=emplyNumber;i+=1){
    cout<<"Please enter gross salary"<<endl;
    cin>>grossSalary;
    cout<<"Please enter worked hours"<<endl;
    cin>>workedHour;

    if(workedHour>40)
    {
    cout<<"Please enter bonus rate "<<endl;
    cin>>bonusRate;
    overtimePayment=(workedHour-40)*bonusRate;
    }
    income=grossSalary+overtimePayment;
    if(income<200){
        tax = 0;
    }
    else if(income>=200&&income<600){
        tax = 0.1;
    }

    else if(income>=600&&income<1200){
        tax = 0.15;
    }

    else if(income>=1200&&income<2000){
        tax = 0.2;
    }

    else if(income>=2000&&income<3500){
        tax = 0.25;
    }
    else if(income>=3500){
        tax = 0.3;
    }

    incometax=income*tax;

    netSalary= (income-incometax-(grossSalary*pension));

    cout<<"your net salary is "<<netSalary<<endl;
   }
    return 0;


}


