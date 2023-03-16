#include <iostream>

using namespace std;

int main()
{
   for(int i = 0; i<6; i++){
    int j = 0 ;
    while(j<11){
        if ((j == 5 - i) || (j == 5 + i)||(i == 5)){
            cout<<"* ";
            j+=2;
        }
        else{
            cout<<" ";
            j ++;
        }

    }
    cout<<endl;


}
    return 0;
}
