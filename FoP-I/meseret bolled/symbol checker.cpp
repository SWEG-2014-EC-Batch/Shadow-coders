
#include <iostream>
using namespace std;

int main()
{
    char x;
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

    
    return 0;
}
   


