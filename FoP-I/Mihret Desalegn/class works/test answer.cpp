#include <iostream>

using namespace std;

int main()
{
    string input_ans,correct_ans[5]={"A","B","C","D","E"};
  for(int i=0;i<5;i++) {
        cout<<"input an answer";
            cin>>input_ans;
        if (input_ans==correct_ans[i])
            cout<<"correct answer";
   else
    cout<<"wrong answer";
    }



    return 0;
}
