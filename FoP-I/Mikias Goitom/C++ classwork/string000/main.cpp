#include <iostream>
#include <array>
using namespace std;

int main(){
    cout<<"Enter 3 number to be displayed in 1D: ";
    array <int,3> num;
     int numSize;
    numSize = num.size();
    for(int j; j < numSize; j++){
        cin>>num[j];
    }
   
    cout<<"\n The size of the array is: "<<numSize<<endl;
    for(int i; i < numSize; i++){
        cout<<num[i]<<" ,";
    }
   /* for(int i = 0; i<5; i++){
        for(int j = 0; j<2; j++){
            cin>> num[i][j];
        }
    }
    for(int k = 0; k<5; k++){
        for(int h = 0; h<2; h++){
            cout<<num[k][h];
        }
        cout<<endl;
    }*/
    return 0;
}