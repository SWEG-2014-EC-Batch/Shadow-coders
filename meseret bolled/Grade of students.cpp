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
    	 while((quiz>=5||quiz<=0)&&at<=3)
	{
		cout<<"wrong input try agian"<<" You have "<<3-at<<" attempts left";
		cin>>quiz;
		at++;
			if(3-at==0){
			return 0;
		}
	}
		
    cout<<"enter your mark in project"<<" You have "<<3-at<<" attempts left";
    	cin>>project;
		 while((project>=20||project<=0)&&at<=3)
	{
		cout<<"wrong input try agian"<<" You have "<<3-at<<" attempts left";
		cin>>project;
		at++;
			if(3-at==0){
			return 0;
		}
	} 
	cout<<"enter your mark in assignment";
    	cin>>assignment;
    	 while((assignment>=10||assignment<=0)&&at<=3)
	{
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
	if(test<=15&&test>=0&&quiz<=5&&quiz>=0&&project>=0&&project<=20&&assignment<=10&&assignment>=0&&finalexam<=50&&finalexam>=0)
	{
	Mark-test+quiz+project+assignment+finalexam;
  if(Mark>=90.0&&Mark<=100)
	cout<<"your mark is A+";
	else if(Mark>=80.0 &&Mark<90.0)
	cout<<"your mark is A";	
	else if (Mark>=75.0 &&Mark<80.0)
    
	cout<<"your mark is B+";  
	else if(Mark>=60.0&&Mark<75.0)
	
	cout<<"your mark is B ";  
	
	else if(Mark>=55.0&&Mark<60.0)
	
	cout<<"your mark is C+";  
		else if(Mark>=45.0&&Mark<55.0)
	
	cout<<"your markis C ";  
		else if(Mark>=30&&Mark<45)
	
	cout<<"your mark is D ";  
	else if (Mark>=0&&Mark<30)
	
	cout<<"your mark is F ";  

  else 
{ cout<<"your mark is invalid input";
}}

else{
	cout<<"invalid input";
}
return 0;
}


