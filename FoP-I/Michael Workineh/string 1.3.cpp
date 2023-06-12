#include <iostream>

using namespace std;
int choice;
int main()
{
    char corrAns[5][1]={'a','b','c','d','a'};
                char stuAns[5][1];
                int score=0;
                cout<<"enter your answers\n";
                for(int i=0;i<5;i++){
                    cout<<i+1<<". ";
                    cin>>stuAns[i][0];
                    if(stuAns[i][0]==corrAns[i][0]){
                    score++;
                    }
                }

                cout<<"you got question ";
                for(int i=0;i<5;i++){
                    if(stuAns[i][0]!=corrAns[i][0]){
                        cout<<i+1<<",";
                    }
                }
                cout<<" wrong"<<endl;
                cout<<score<<"/5";
return 0;
}
