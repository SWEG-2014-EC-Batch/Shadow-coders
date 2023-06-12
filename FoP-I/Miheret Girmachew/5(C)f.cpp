#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i<6; i++){
    int j = 0 ;
    while(j<11){
        if ((j < 5 -i)||(j - i >= 7)){
            cout<<" ";
            j++;
        }
        else{
            cout<<"* ";
            j += 2;
        }

    }
    cout<<endl;


}


    return 0;
}
