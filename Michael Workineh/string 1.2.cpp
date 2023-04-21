#include <iostream>

using namespace std;
int main(){
string teamMemeberID [5][1] = {"1058","1098","1234","2345","7890"};
    string teamMemeber [5][1]={"michael","user1","user2","user3","user4"};
    string ID;
    cout<<"enter ID number\n";
        cin>>ID;
    //cout<<ID[][0];

        for(int i =0,j=0;i<5;i++){
        if(ID==teamMemeberID[i][0]){

                cout<<teamMemeber[i][0];

        }}
        return 0;
        }
