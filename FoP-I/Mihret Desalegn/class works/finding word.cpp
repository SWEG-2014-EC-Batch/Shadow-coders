#include <iostream>

using namespace std;

int main()
{
    string in_word,word[5]={"mihret","word","program"};
    cout<<"input a word"<<endl;
    cin>>in_word;
    for(int i=0;i<3;i++){
        if (in_word==word[i]){
            cout<<"word is found in  "<<i+1;
        }
    }


;
    return 0;
}
