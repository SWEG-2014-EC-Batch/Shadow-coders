/*write a program that converts a mark of a course entered from
the keyboard to its corresponding letter grades based on the following scales;
A+>=90,A>=80,B+>=75,B>=60,C+>=55,C>=45,D>=30,F<30;*/

#include<iostream>
using namespace std;
int main()
{
    int grade;
    cout<<"please enter your grade;"<<endl;
    cin>>grade;
    if(grade>=90 && grade<=100)
        cout<<"Your grade is A+.";
    else if(grade>=80)
        cout<<"Your grade is A.";
    else if(grade>=75)
        cout<<"Your grade is B+.";
    else if(grade>=60)
        cout<<"your grade is B.";
    else if(grade>=55)
        cout<<"Your grade is C+.";
    else if(grade>=45)
        cout<<"Your grade is C.";
    else if(grade>=30)
        cout<<"Your grade is D.";
    else if(grade<30 && grade>=0)
        cout<<"Your grade is F.";
    else
        cout<<"you have entered wrong number.";


  return 0;




}

