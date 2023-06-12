#include <iostream>

using namespace std;

int main()
{
    float netSal,gross_sal,pension,income_tax,overtime_paym,tax_rate,OTrate;
    int workHour,ext_hour,no_employ;
    const float pensi_rate=0.07;
    cout<<"enter number of employ";
    cin>>no_employ;
    for (int i=1;i<=no_employ;i++)
        {
    cout<< "please enter your gross salary"<<endl;
    cin>>gross_sal;
    cout<<"please enter worked hours in this month"<<endl;
    cin>>workHour;
    pension=pensi_rate*gross_sal;

    if (workHour>40){
        cout<< "please enter bonus rate"<<endl;
        cin>>OTrate;
        ext_hour=workHour-40;
        overtime_paym=ext_hour*(OTrate/100);
    }
    if (gross_sal>=0&&gross_sal<200)
    {
       tax_rate==0;
       income_tax=(tax_rate/100)*gross_sal;
       netSal=(gross_sal-pension-income_tax)+ overtime_paym;
       cout<<"your net salary is  "<<netSal;
    }


    else if(gross_sal>=200&&gross_sal<600){
        tax_rate==10;
        income_tax=(tax_rate/100)*gross_sal;
        netSal=(gross_sal-pension-income_tax)+ overtime_paym;
       cout<<"your net salary is  "<<netSal;}
    else if(gross_sal>=600&&gross_sal<1200){
        tax_rate==15;
        income_tax=(tax_rate/100)*gross_sal;
        netSal=(gross_sal-pension-income_tax)+ overtime_paym;
       cout<<"your net salary is  "<<netSal;}
   else if(gross_sal>=1200&&gross_sal<2000){
        tax_rate==20;
        income_tax=(tax_rate/100)*gross_sal;
        netSal=(gross_sal-pension-income_tax)+ overtime_paym;
       cout<<"your net salary is  "<<netSal;}
   else if(gross_sal>=2000&&gross_sal<3500){
        tax_rate==25;
        income_tax=(tax_rate/100)*gross_sal;
        netSal=(gross_sal-pension-income_tax)+ overtime_paym;
       cout<<"your net salary is  "<<netSal;}
   else if(gross_sal>=3500){
        tax_rate==30;
        income_tax=(tax_rate/100)*gross_sal;
        netSal=(gross_sal-pension-income_tax)+ overtime_paym;
       cout<<"your net salary is  "<<netSal;}
    else
        cout<<"invalid gross salary";
        cout<<endl;
        }




    return 0;
}
