#include<iostream>
#include<array>
using namespace std;
int main(){
    int intial[] = {45, 67, 75, 64, 83, 59};
    int last[2][3];
    int *ptr1[2];

    for(int i = 0; i<2; i++){
        ptr1[i] = last[i];
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            if(i==0){
                *(ptr1[i]+j) = intial[j];
            }
            else if(i==1){
                *(ptr1[i]+j)=intial[j];
            }
        }
    }
    return 0;
}
