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
    if(stu[i]==testans[i])
    count++;
}
cout<<count;	
	
}

