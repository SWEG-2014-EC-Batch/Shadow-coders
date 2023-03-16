#include<iostream>
using namespace std;
int num, reversed_num=0, remainder,howM;
char q;
int main(){
    cout<<"======= Number reverser =======";
    cout<<"\nHow many integer do you want to reverse: ";
    cin>>howM;
    for(int i;i<=howM;i++){
    cout<<"\nEnter an integar: ";
    cin>>num;
   while(num!=0){
        remainder= num%10;
        reversed_num= reversed_num*10+ remainder;
        num/=10;
   }
    cout<<"\nYour reversed number is :"<<reversed_num;
    }
   return 0;
}
