/*Update the program so that program read the various assessment and compute the total mark;
Test=15%, Quiz=5%, Project=20%, Assignment=10%, Final exams=50%.*/

#include <iostream>

using namespace std;

int main()
{
float Test,Quiz,Project,Assessment,Final,sum;
int i=1;

    cout<< "Please enter your results;"<<endl;
    cout<< "Test from 15%."<<endl;
    cin>> Test;


    if(Test>15 || Test<0)
        do
        {
        cout<< "You have inserted a wrong result. You are left with 2 attempts, please try again;"<<endl;
        i++;
        }while(i>=3);

    cout<<" Quiz from 5%."<<endl;
    cin >> Quiz;
    if (Quiz>5 || Quiz<0)
       cout<< "You have inserted a wrong result."<<endl;

    cout<< " Project from 20%."<<endl;
    cin>> Project;
    if(Project>20 || Project<0)
       cout<<"You have inserted a wrong result."<<endl;

    cout<< "Assignment from 10%."<<endl;
    cin>> Assessment;
    if (Assessment>10 || Assessment<0)
       cout<<"You have inserted a wrong result."<<endl;

    cout<<" Final result from 50%."<<endl;
    cin>> Final;
    if (Final>50 || Final<0)
        cout<<"You have inserted a wrong result."<<endl;

     sum= Test+Quiz+Project+Assessment+Final;
         cout<<"Your result is "<<sum<<"."<<endl;

        if(sum>=90 && sum<=100)
        cout<<"Your grade is A+.";
    else if(sum>=80)
        cout<<"Your grade is A.";
    else if(sum>=75)
        cout<<"Your grade is B+.";
    else if(sum>=60)
        cout<<"your grade is B.";
    else if(sum>=55)
        cout<<"Your grade is C+.";
    else if(sum>=45)
        cout<<"Your grade is C.";
    else if(sum>=30)
        cout<<"Your grade is D.";
    else if(sum<30&& sum>=0)
        cout<<"Your grade is F.";
    else
        cout<<"you have entered wrong number.";





    return 0;
}
