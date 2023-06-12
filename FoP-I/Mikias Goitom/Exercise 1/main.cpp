//This is a program that checks if the input is an alphabets which uppercase or lowercase, vowel or a consonant and also digit, it checks it it is even or odd
#include <iostream>
using namespace std;
char symbol, stop;//input
    int main(){
        cout<<"======= Symbol checker =======";
        cout <<"\nEnter a symbol: ";
        cin>>symbol;

//       while(stop==1){
        if(symbol>='a'&&symbol<='z') {
            cout<<"Your symbol '"<<symbol<<"' is a lowercase"<<endl;
            if(symbol == 'a'||symbol == 'e'|| symbol == 'i'|| symbol == 'o'|| symbol == 'u'){
                cout<<"the lowercase '"<<symbol<<"' is a vowel"<<endl;
            }
            else{
                cout<<"the lowercase '"<<symbol<<"' is a consonant"<<endl;
            }
        }
        else if(symbol>='A'&&symbol<='Z') {
            cout<<"Your symbol '"<<symbol<<"' is an uppercase"<<endl;
            if(symbol == 'A'||symbol == 'E'|| symbol == 'I'|| symbol == 'O'|| symbol == 'U'){
                cout<<"the uppercase '"<<symbol<<"' is a vowel"<<endl;
            }
            else{
                cout<<"the uppercase '"<<symbol<<"' is a consonant"<<endl;
            }
        }

        else if(symbol>='0'&&symbol<='9'&&symbol%2==0)
        {
            cout<<"Your symbol '"<<symbol<<"' is a digit and an even number"<<endl;
        }
        else if(symbol>='0'&&symbol<='9'&&symbol%2==1)
        {
            cout<<"Your symbol '"<<symbol<<"' is a digit and an odd number"<<endl;}
        else {
            cout<<"Your symbol '"<<symbol<<"' is a special character"<<endl;
        }
//        if(stop=='s'||stop=='S'){
//            cout<<"To stop the program press (s), to continue press any other key";
//            stop=stop+1;
//        }
//       }
    return 0;
}
