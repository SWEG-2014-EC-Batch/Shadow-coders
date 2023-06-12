#include <iostream>

using namespace std;

int main(){
    int num[] = {10,21, 54, 65, 56, 789, 95};
    int *ptr = num;
    cout<<*(num+2)<<endl;
    cout<<*(ptr+1)<<endl;
    cout<<num[0]<<endl;
    return 0;
}