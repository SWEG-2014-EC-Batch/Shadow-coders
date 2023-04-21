#include<iostream>
using namespace std;
int main()
{
	int twoD[2][3],array[]={45,67,75,64,83,59};
	int *ptr1[2];
	for(int i =0;i<2;i++){
		for(int j=0;j<3;j++){
			ptr1[i]=twoD[i];
		}
	}
	
		for(int i=0;i<2;i++){
			if(i==0){
			for(int j=0;j<3;j++){
				*(ptr1[i]+j)=array[j];
			}
		}
		else if(i==1){
			for(int j=3,l=0;j<6;j++,l++){
				*(ptr1[i]+l)=array[j];
			}
		}
		}
		
		for(int i=0;i<2;i++){
			for(int j=0;j<3;j++){
				cout<<twoD[i][j]<<" ";
			}
			cout<<endl;
		}
return 0;}

