#include<iostream>
using namespace std;
int main()
{	char *string,message[]={"vacation is near"};
	string=message;
	for(int i=0; i<16;i++){
		cout<<*(string+i);
	}
	
		return 0;	
	}
