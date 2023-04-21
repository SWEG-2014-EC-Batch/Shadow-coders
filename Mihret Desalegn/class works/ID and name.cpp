#include <iostream>

using namespace std;

int main()
{
    string IDNO,ID_NO[5]={"ETS1074/14","ETS1101/14","ETS0924/14","ETS1015/14","ETS0833/14"},name[5]={"mihret","milkiyas","kidus","masetewal","izzat"};
    cout<<"enter an id number"<<endl;
    cin>>IDNO;
    for(int i=0;i<5;i++){
        if(IDNO==ID_NO[i]){
            cout<<name[i];
        break;
        }

    }
    return 0;
}
