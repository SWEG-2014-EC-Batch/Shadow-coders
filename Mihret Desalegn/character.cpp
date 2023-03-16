#include <iostream>
#include<cmath>


using namespace std;

int main()
{
    char symbol;
    cout<< "please enter any symbol: ";
    cin>>symbol;
    if(symbol<='z'&&symbol>='a'){
       cout<<"the symbol is lowercase";
       switch(symbol){
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
       cout<<"\nYour symbol is a vowel";
       break;
         default:
            cout<<"\nYour symbol is a consonant";
       }}

     else if (symbol<='Z'&&symbol>='A'){
        cout<<"the symbol is uppercase";
        if(symbol=='A'||symbol=='E'||symbol=='I'||symbol=='O'||symbol=='U'){
            cout<<"\nYour symbol is a vowel";
        }
        else{
            cout<<"\nYour symbol is a consonant";
     }}
     else if (symbol<='9'&&symbol>='0'&& symbol%2==0)
        {
        cout<<"The symbol is a digit";
         cout<<"\nYour digit is even";
        }
        else if (symbol<='9'&&symbol>='0'&& symbol%2==1)
        {
        cout<<"The symbol is a digit";
         cout<<"\nYour digit is odd";
        }


     else
        cout<<"the symbol is a special character";



    return 0;
}
