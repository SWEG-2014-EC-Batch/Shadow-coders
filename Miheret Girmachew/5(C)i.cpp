#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i<= 25;i++ ){
    if(i % 5 == 0){
        cout<<5<<endl;
    }
    else{
        cout<<i % 5 << " ";
    }
}

    return 0;
}
