#include <iostream>

using namespace std;

int main()
{
    int coun0=0,coun1=0,coun2=0,coun3=0,coun4=0,coun5=0,coun6=0,coun7=0,coun8=0,coun9=0;
    int num,rev;
    cout<<"enter a number\n";
    cin>>num;
    while(num>=1){
        rev=num%10;//num=num/10
        num/=10;
        switch(rev){
            case 0:
                coun0++;
                break;
            case 1:
                coun1++;
                break;
            case 2:
                coun2++;
                break;
            case 3:
                coun3++;
                break;
            case 4:
                coun4++;
                break;
            case 5:
                coun5++;
                break;
            case 6:
                coun6++;
                break;
            case 7:
                coun7++;
                break;
            case 8:
                coun8++;
                break;
            case 9:
                coun9++;
                break;
        }}
        cout<<"____________________________"<<endl;
        cout<<" digit type  |  frequency "<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      0      |     "<<coun0<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      1      |     "<<coun1<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      2      |     "<<coun2<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      3      |     "<<coun3<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      4      |     "<<coun4<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      5      |     "<<coun5<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      6      |     "<<coun6<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      7      |     "<<coun7<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      8      |     "<<coun8<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      9      |     "<<coun9<<endl;
        cout<<"----------------------------"<<endl;


    return 0;
}
