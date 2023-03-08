//write a program that tells whether a character entered from the keyboard is in upper case or in lower case or digit or special character.
#include <iostream>

using namespace std;

int main()
{
    char inPut;
    int m;
    cout << "Enter a symbol: ";
    cin>>inPut;

    if(inPut>='a'&&inPut<='z') {
        cout<<"Your symbol '"<<inPut<<"' is a lowercase"<<endl;
        if(inPut == 'a'||inPut == 'e'|| inPut == 'i'|| inPut == 'o'|| inPut == 'u'){
            cout<<"the lowercase '"<<inPut<<"' is a vowel"<<endl;
        }
        else{
            cout<<"the lowercase '"<<inPut<<"' is a consonant"<<endl;
        }
    }
    else if(inPut>='A'&&inPut<='Z') {
        cout<<"Your symbol '"<<inPut<<"' is an uppercase"<<endl;
        if(inPut == 'A'||inPut == 'E'|| inPut == 'I'|| inPut == 'O'|| inPut == 'U'){
            cout<<"the uppercase '"<<inPut<<"' is a vowel"<<endl;
        }
        else{
            cout<<"the uppercase '"<<inPut<<"' is a consonant"<<endl;
        }
    }
    /*else if(inPut>='0'&&inPut<='9') {
        cout<<"Your symbol '"<<inPut<<"' is a digit"<<endl;
       /* switch (inPut%2){//1 sec
            case 0://1 sec
            cout<<"the digit '"<<inPut<<"' is even"<<endl;//1 sec
            break;//1 sec
            default://1 sec
            cout<<"the digit '"<<inPut<<"' is odd";//1 sec

            //takes 6 seconds
        }

    }*/
    else if(inPut>='0'&&inPut<='9'&&inPut%2==0)
    {
        cout<<"Your symbol '"<<inPut<<"' is a digit and an even number"<<endl;
    }
    else if(inPut>='0'&&inPut<='9'&&inPut%2==1)
    {
        cout<<"Your symbol '"<<inPut<<"' is a digit and an odd number"<<endl;}
    else {
        cout<<"Your symbol '"<<inPut<<"' is a special character"<<endl;
    }

        //the conditions do not have any dependency. if the conditions had dependency on each other we could have used a nested if condition.


    return 0;
}
