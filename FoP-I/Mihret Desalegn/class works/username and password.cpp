#include <iostream>

using namespace std;

int main()
{
    string in_UNmae,in_Password,password[3]={"1234567","7654321","abcdef"},Unname[3]={"mihret","milkiyas","kidus"};
    cout<<"enter user name"<<endl;
    cin>>in_UNmae;
    cout<<"enter a password"<<endl;
    cin>>in_Password;
    for (int i=0; i<3;i++){
        if (in_UNmae==Unname[i]){
            if (in_Password==password[i])
                cout<<"correct user name and password";
            else
                cout<<"incorrect password ";


        }
        if(in_UNmae!=Unname[2]&&in_UNmae!=Unname[1]&&in_UNmae!=Unname[0]){
        cout<<"invalid user name ";
        break;
        }


    }

    return 0;
}
