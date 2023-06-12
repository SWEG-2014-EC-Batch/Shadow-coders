
    #include <iostream>

using namespace std;

int main()
{
     float quiz,test,project,assignment,final_exam,Mark, num_st;
   cout<<"enter number of students ";
   cin>>num_st;
   for (int i=1;i<=num_st;i++){

   cout<<"enter your mark in quiz"<<endl;
   cin>>quiz;
   if (quiz>5){
        cout<<"invalid input";

    break;}
   cout<<"enter your mark in test"<<endl;
   cin>>test;
   if (test>15){
        cout<<"invalid input";

    break;}
   cout<<"enter your mark in project"<<endl;
   cin>>project;
   if (project>20){
        cout<<"invalid input";

    break;}
   cout<<"enter your mark in assignment"<<endl;
        cin>>assignment;
        if (assignment>10){
        cout<<"invalid input";

    break;}
        cout<<"enter your mark in final exam"<<endl;
         cin>>final_exam;
         if (final_exam>50){
        cout<<"invalid input";

    break;}

Mark=quiz+test+project+assignment+final_exam;

             {
                 if(Mark>100||Mark<0)
               cout<<"invalid input";
                else if(Mark>=90)
               cout<<"your grade is A+";
               else if (Mark>=80)
                cout<<"your grade is A";
               else if (Mark>=75)
               cout<<"your grade is B+";
            else if (Mark>=60)
             cout<<"your grade is B";
            else if (Mark>=55)
            cout<<"your grade is C+";
            else if (Mark>=45)
          cout<<"your grade is C";
            else if (Mark>=30)
             cout<<"your grade is D";
            else if(Mark>=0)
            cout<<"Your grade is F";
            else
                cout<<"invalid input";
    }cout<<endl;}







    return 0;
}

