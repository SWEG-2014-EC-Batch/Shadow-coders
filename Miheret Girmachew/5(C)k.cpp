#include <iostream>

using namespace std;

int main()
{
   for(int i = 0; i<5; i++){
    for(int j = 4;j>=0;j--){
        if(j<=i){
            cout<<j+1<<" ";
        }
        else{
            cout<<"  ";
        }

    }
    cout<<endl;
}
    return 0;
}
