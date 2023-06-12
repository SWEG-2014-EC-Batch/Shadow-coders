#include <iostream>

using namespace std;

int main()
{
    for(int i = 0; i<7; i++){
    for(int j = i;j<7;j++){
        if((i == 0) || (j == i)||(j == 6))
        cout<<"* ";
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
}
    return 0;
}
