#include <iostream>

using namespace std;

int main()
{
    //input: mark
    //process:converting marks to grades
    //output:grade

    float mark;
    //char grade;

    cout<<"Please enter your score ";
    cin>>mark;

    cout<<"your grade is ";
    if(mark>=90&&mark<=100){
        cout<<"A+"<<endl;
    }

    else if(mark>=80&&mark<90){
        cout<<"A"<<endl;
    }
     else if(mark>=75&&mark<80){
        cout<<"B+"<<endl;
    }
     else if(mark>=60&&mark<75){
        cout<<"B"<<endl;
    }
     else if(mark>=55&&mark<60){
        cout<<"C+"<<endl;
    }
     else if(mark>=45&&mark<55){
        cout<<"C"<<endl;
    }
     else if(mark>=30&&mark<45){
        cout<<"D"<<endl;
    }
     else if(mark>=0&&mark<30){
        cout<<"F"<<endl;
    }
    else{
        cout<<"invalid input"<<endl;
    }
    //DEDB


    return 0;
}
