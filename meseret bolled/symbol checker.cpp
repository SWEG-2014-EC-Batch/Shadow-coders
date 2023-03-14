#include<iostream>
using namespace std;
int main()
{
  char x;
  int m;
  cout<<"enter x: ";
  cin>>x;
  if(x>='a'&&x<='z')
  {
  cout<<"our value "<<x<<"is a lowercase";}
  else if(x>='A'&&x<='Z')
  {
  cout<<"our char "<<x<<"is an uppercase";
  }
  else if(x>='0'&&x<='9'){
  
  cout<<"our char "<<x<<"is a digit";}
  else 
  {
cout<<x<<"is a  any character"; }
  return 0;
  }
  
   


