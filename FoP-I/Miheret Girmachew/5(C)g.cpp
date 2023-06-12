#include <iostream>

using namespace std;

int main()
{
for(int i = 5; i>=0; i--){
    int j = 11 ;
    while(j>=0){
        if ((j < 5 -i)||(j - i >= 7)){
            cout<<" ";
            j--;
        }
        else{
            cout<<"* ";
            j -= 2;
        }

    }
    cout<<endl;


}

    return 0;
}
