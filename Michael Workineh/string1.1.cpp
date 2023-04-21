#include <iostream>

using namespace std;
int main()
{
    char teamMemeberID [5][4] = {{'1','0','5','8'},{'0','8','3','4'},{'0','8','5','8'},{'0','9','2','5'},{'1','0','4','4'}};
    char teamMemeber [5][7]={{'m','i','c','h','a','e','l'},{'K','a','l','e','b'},{'J','o','h','n'},{'k','i','d','u','s'},{'m','e','r','o','n'}};
    char ID[1][4];
    cout<<"enter an ID number\n";
    for(int i =0;i<4;i++){
        cin>>ID[0][i];
    }
    //cout<<ID[][0];

        if((ID[0][0]==teamMemeberID[0][0])&&(ID[0][1]==teamMemeberID[0][1])&&(ID[0][2]==teamMemeberID[0][2])&&(ID[0][3]==teamMemeberID[0][3])){
            cout<<"wellcome, ";
            for(int i =0;i<7;i++){
                cout<<teamMemeber[0][i];
            }
        }

        else if((ID[0][0]==teamMemeberID[1][0])&&(ID[0][1]==teamMemeberID[1][1])&&(ID[0][2]==teamMemeberID[1][2])&&(ID[0][3]==teamMemeberID[1][3])){
            cout<<"wellcome, ";
            for(int i =0;i<5;i++){
                cout<<teamMemeber[1][i];
                }
        }
        else if((ID[0][0]==teamMemeberID[2][0])&&(ID[0][1]==teamMemeberID[2][1])&&(ID[0][2]==teamMemeberID[2][2])&&(ID[0][3]==teamMemeberID[2][3])){
            cout<<"wellcome, ";
            for(int i =0;i<4;i++){
                cout<<teamMemeber[2][i];
                }
        }
        else if((ID[0][0]==teamMemeberID[3][0])&&(ID[0][1]==teamMemeberID[3][1])&&(ID[0][2]==teamMemeberID[3][2])&&(ID[0][3]==teamMemeberID[3][3])){
            cout<<"wellcome, ";
            for(int i =0;i<5;i++){
                cout<<teamMemeber[3][i];
                }
        }
        else if((ID[0][0]==teamMemeberID[4][0])&&(ID[0][1]==teamMemeberID[4][1])&&(ID[0][2]==teamMemeberID[4][2])&&(ID[0][3]==teamMemeberID[4][3])){
            cout<<"wellcome, ";
            for(int i =0;i<5;i++){
                cout<<teamMemeber[4][i];
                }
        }
        else{
            cout<<"the student is not a member of the group\n";
        }
return 0;
}
