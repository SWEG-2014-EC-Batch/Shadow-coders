#include<iostream>
#include<array>
using namespace std;
int main(){
    int intial[] = {45, 67, 75, 64, 83, 59};
    int last[2][3];
    int *ptr1[2];
    
    for(int i=0;i<2;i++){
        ptr1[i]=last[i];
    }

    for(int i=0;i<3;i++){
        if(i==0){
        for(int j=0;j<3;j++){
            *(ptr1[i]+j)=intial[j];
        }
        }
        else if(i==1){
         for(int j=3, k=0;j<6;j++,k++){
            *(ptr1[i]+k)=intial[j];
        }   
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<last[i][j]<<" ";
        }
        cout<<endl;
    }
/*
    for(int i = 0; i<2; i++){
        ptr1[i] = last[i];
    }

    for(int i=0;i<2;i++){
        
            if(i==0){
                for(int j=0;j<3;j++){
                *(ptr1[i]+j) = intial[j];
            }}
            else if(i==1){
                for(int j=3,l=0;j<6;j++,l++){
                *(ptr1[i]+l)=intial[j];}
            }
        
    }
    
    for(int i=0;i<2;i++){
        
            for(int j=0;j<3;j++){
                cout<<last[i][j]<<" ";
            }
        cout<<endl;
    }
    */
    return 0;
}
