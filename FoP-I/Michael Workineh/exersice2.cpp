#include <iostream>

using namespace std;

int main()
{
    //input: gross salary, worked hrs, income tax rate, bonus rate

    //process:op= wHr*bRate
                //penstion= gs*pRate(7%)
                //income tax = gs*incometax rate
    // ns = (gs-pension-incometax)+op



    //output: net salary
    float grSalary,workHr,tax,bRate,nSalary,op=0,intax,income;
    int emplyNum;
    const float pen =0.07;

    cout<<"Please enter number of employ "<<endl;
    cin>>emplyNum;
    for(int i =1;i<=emplyNum;i+=1){
    cout<<"Please enter gross salary"<<endl;
    cin>>grSalary;
    cout<<"Please enter worked hours"<<endl;
    cin>>workHr;
    //cin>>tax;
    if(workHr>40)
    {
    cout<<"Please enter bonus rate "<<endl;
    cin>>bRate;
    op=(workHr-40)*bRate;
    }
    income=grSalary+op;
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

    intax=income*tax;

    nSalary= (income-intax-(grSalary*pen));

    cout<<"your net salary is "<<nSalary<<endl;
   }//goto l;
    return 0;


}
