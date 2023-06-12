//Update the program to check if the number is odd/ even and also the alphabet is vowel or consonant.

#include<iostream>
using namespace std;
int main()
{
char x ;// x is a character to be inserted.
    cout<<"Please enter a character."<<endl;
    cin>>x;
    if(x>='A' && x<='Z')// letters A-Z.
        {
           if( x=='A'||x=='E'||x=='I'|| x=='O'|| x=='U')
            cout<<" The character is vowel upper case letter.";
           else
            cout<<" The character is consonant upper case letter.";
        }
    else if (x>='a' && x<='z')// letters a-z
          {
            if( x=='a'||x=='e'||x=='i'|| x=='o'|| x=='u')
            cout<<" The character is vowel lower case letter.";
            else
            cout<<" The character is consonant lower case letter.";
          }
    else if (x>='0' && x<='9')//digits 0-9
         {
           if( x%2==0)
           cout<<" The character is even digit number.";
           else
           cout<<" The character is odd digit number.";
         }
    else
           cout<<" It is a special character.";

return 0;
}
