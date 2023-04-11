#include <iostream>
#include<cstring>
using namespace std;
int main(){
	int count=0;
	char stu[6];
	char testans[6]={'A','B','C','D','A','\0'};
    cout<<"Enter test answer";
    for(int i=0;i<5;i++){
    cin>>stu[i];
}
for(int i=0;i<5;i++)
if(stu[i]==testans[i]){
	cout<<"question "<<i+1<<"  is correct."<<endl;
           count++; }
           else
           {cout<<"question "<<i+1<<"  is correct."<<endl;}
		
		   
   cout<<"your result is :"<<count<<endl;
return 0;
}

