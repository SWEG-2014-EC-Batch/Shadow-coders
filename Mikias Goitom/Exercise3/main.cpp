#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float test,quiz,project,assignment,finalexam,mark;
	cout<<"enter your mark in test: ";
    cin>>test;
	cout<<"enter your mark in quiz: ";
    cin>>quiz;
    cout<<"enter your mark in project: ";
    cin>>project;
	cout<<"enter your mark in assignment: ";
    cin>>assignment;
    cout<<"enter your mark in finalexam: ";
	cin>>finalexam;

    if(test<=15&&test>=0&&quiz<=5&&quiz>=0&&project>=0&&project<=20&&assignment<=10&&assignment>=0&&finalexam<=50&&finalexam>=0){
	    mark=test+quiz+project+assignment+finalexam;
        cout<<"your grade is: ";
            if(mark>=90&&mark<=100){
                cout<<"A+";
            }

            else if(mark>=80&&mark<90){
                cout<<"A";
            }
             else if(mark>=75&&mark<80){
                cout<<"B+";
            }
             else if(mark>=60&&mark<75){
                cout<<"B";
            }
             else if(mark>=55&&mark<60){
                cout<<"C+";
            }
             else if(mark>=45&&mark<55){
                cout<<"C";
            }
             else if(mark>=30&&mark<45){
                cout<<"D";
            }
             else if(mark>=0&&mark<30){
                cout<<"F";
            }
    }
    return 0;
}

