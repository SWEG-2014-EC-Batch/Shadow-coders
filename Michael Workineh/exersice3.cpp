#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float Grade,test,quiz,project,assignment,finalexam,Mark;
    int at= 1;
	cout<<"enter your mark in test";
    cin>>test;
    while((test>=15||test<=0)&&at<=3)//give a chance to try  again if there is wrong number.
    {
		cout<<"wrong input try agian"<<" You have "<<3-at<<" attempts left";
		cin>>test;
		at++;
		    if(3-at==0){
			    return 0;
		    }
	}
	cout<<"enter your mark in quiz";
    cin>>quiz;	
    	while((quiz>=5||quiz<=0)&&at<=3){
		    cout<<"wrong input try agian"<<" You have "<<3-at<<" attempts left";
		    cin>>quiz;
		    at++;
			    if(3-at==0){
					return 0;
		        }
	}
		
    cout<<"enter your mark in project"<<" You have "<<3-at<<" attempts left";
    cin>>project;
		while((project>=20||project<=0)&&at<=3){
		    cout<<"wrong input try agian"<<" You have "<<3-at<<" attempts left";
		    cin>>project;
		    at++;
			    if(3-at==0){
			        return 0;
		        }
	} 
	cout<<"enter your mark in assignment";
    cin>>assignment;
    	 while((assignment>=10||assignment<=0)&&at<=3){
		    cout<<"wrong input try agian"<<" You have "<<3-at<<" attempts left";
		    cin>>assignment;
		    at++;
			if(3-at==0){
			return 0;
		}
	}
    cout<<"enter your mark in finalexam";
	cin>>finalexam;
	    while((finalexam>=50||finalexam<=0)&&at<=3)
	    {
		    cout<<"wrong input try agian"<<" You have "<<3-at<<" attempts left";
		    cin>>finalexam;
		    at++;
			    if(3-at==0){
			    return 0;
		}
	} 
    if(test<=15&&test>=0&&quiz<=5&&quiz>=0&&project>=0&&project<=20&&assignment<=10&&assignment>=0&&finalexam<=50&&finalexam>=0){
	    Mark-test+quiz+project+assignment+finalexam;   
        cout<<"your grade is ";
            if(Mark>=90&&Mark<=100){
                cout<<"A+"<<endl;
            }

    else if(Mark>=80&&Mark<90){
        cout<<"A"<<endl;
    }
     else if(Mark>=75&&Mark<80){
        cout<<"B+"<<endl;
    }
     else if(Mark>=60&&Mark<75){
        cout<<"B"<<endl;
    }
     else if(Mark>=55&&Mark<60){
        cout<<"C+"<<endl;
    }
     else if(Mark>=45&&Mark<55){
        cout<<"C"<<endl;
    }
     else if(Mark>=30&&Mark<45){
        cout<<"D"<<endl;
    }
     else if(Mark>=0&&Mark<30){
        cout<<"F"<<endl;
    }}


    return 0;
}
