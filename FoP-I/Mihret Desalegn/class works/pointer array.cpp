#include <iostream>

using namespace std;

int main()
{
    double price[10]={10.62,14.89,13.21,16.55,18.62,9.47,6.58,18.32,12.15,3.98},quantity[10]={4,8.5,6,7.35,9,15.3,3,5.4,2.9,4.8},amount[10];
    double *ptr1=price,*ptr2=quantity,*ptr3=amount;
    for (int i=0;i<10;i++){
        *(ptr3+i)=(*(ptr1+i))*(*(ptr2+i));
    }
     for (int i=0;i<10;i++){
        cout<<*(ptr3+i)<<endl;
    }




    return 0;
}
