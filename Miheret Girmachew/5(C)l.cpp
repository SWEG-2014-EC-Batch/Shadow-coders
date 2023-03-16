#include <iostream>

using namespace std;

int main()
{

for(int i = 1; i<= 25;i++ ){
    if(i % 5 == 0){
        cout<<"e"<<endl;
    }
    else{
        cout<<static_cast<char>(i % 5 + 96) << " ";
    }
}
    return 0;
}
