/*write a program that tells whether a character entered from the keyboard is in uppercase
or in lowercase or digit or special character.*/

#include <iostream>

using namespace std;

int main()
{
   char x ;
    cout<<"Please enter a character."<<endl;
    cin>>x;
    if(x>='A' && x<='Z')//To check if 'x' is upper case alphabet letter.
    cout<< "The character is an upper case letter.";
    else if (x>='a' && x<='z')//To check if 'x' is lower case alphabet letter.
    cout<< "The character is a lower case letter.";
    else if (x>='0' && x<='9')
    cout<<"The character is a digit.";
    else
    cout<< "It is a special character.";

    return 0;
}
