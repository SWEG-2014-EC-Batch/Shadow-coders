#include <iostream>
#include <cstring>
using namespace std;

int main() {
     //char ID_NO[1][11];
     //char ID_NO1[5][11]={"ETS1052/14","ETS1006/14","ETS0869/14","ETS0944/14","ETS0987/14" };
     string ID_NO[1];
    string ID_NO1[5][2]={{"ETS1052/14","Meseret Bolled"},{"ETS1006/14","Makeda Yosef"},{"ETS0869/14","Kaleb Demisse"},
	{"ETS0944/14","Kurubel Legesse"},{"ETS0987/14","Liya Tsegaye"}};
	cout<<"Enter your ID number";
	cin>>ID_NO[0];
	for(int i=0; i<5;i++){
	if(ID_NO[0]==ID_NO1[i][0])
	{
	cout<<ID_NO1[i][1]<<endl; 
	return 0;
}}
cout<<"invalid id"<<endl;
return 0;
}
