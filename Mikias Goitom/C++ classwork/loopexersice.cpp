#include<iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter dimensions";
    cout<<"first: ";
    cin>>x;
    cout<<"second: ";
    cin>>y;
    for(int i=0; i<x; i++){

        for(int j=0;j<y;j++){
            if(j==1||j==y)
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}