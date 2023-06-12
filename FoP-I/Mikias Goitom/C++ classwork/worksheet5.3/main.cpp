#include<iostream>
using namespace std;
int main(){
    cout<<"The list of alphabets are: "<<endl;
    int alphabet[6][10];
    for(int n=0;n<26;n+=5)
    {
        alphabet[n][0] = n+65;
        alphabet[n][1] = n+97;
        alphabet[n][2] = n+66;
        alphabet[n][3] = n+98;
        alphabet[n][4] = n+67;
        alphabet[n][5] = n+99;
        alphabet[n][6] = n+68;
        alphabet[n][7] = n+100;
        alphabet[n][8] = n+69;
        alphabet[n][9] = n+101;


    cout<<(char)alphabet[n][0]<<(char)alphabet[n][1]<<" ,"<<(char)alphabet[n][2]<<(char)alphabet[n][3]<<" ,"<<(char)alphabet[n][4]<<(char)alphabet[n][5]<<" ,"<<(char)alphabet[n][6]<<(char)alphabet[n][7]<<" ,"<<(char)alphabet[n][8]<<(char)alphabet[n][9]<<endl;
    }

return 0;
}
