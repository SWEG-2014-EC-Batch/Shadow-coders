//This is a program the Net-pay of an employee after the deduction of tax and persion
#include <iostream>
using namespace std;
int main(){
    /*gSalary is for gross salary
    nSalary is for net salary
    */
    float gSalary,nSalary,wHr,overTimerate,ovrPay=0,intax,tax,income;//inputs
    const float pen =0.07;//fixed pension rate

    cout<<"Please enter gross salary: ";
    cin>>gSalary;
    cout<<"Please enter worked hours: ";
    cin>>wHr;
    if(wHr>40){
    cout<<"Please enter bonus rate: ";
    cin>>overTimerate;
    ovrPay=(wHr-40)*overTimerate;
    }
    income=gSalary+ovrPay;
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

    intax=income*tax;//to calcualte total tax deductable

    nSalary= (income-intax-(gSalary*pen));//calculate net salary

    cout<<"your net salary is "<<nSalary<<endl;

    return 0;
}

