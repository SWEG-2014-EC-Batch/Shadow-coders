    //This program is a BMI calculator that can be used by a single user, known number of users and unknown number of users.
    //It is also gender specific.
    #include<iostream>
    #include<math.h>
    using namespace std;

    char gender;//gender of the users
    float weight, height, bmi;//input values
    int option, num_users, t;
        int main(){
            cout<<"=====++ BMI CALCULATOR ++=====";
            cout<<"\n\nEnter the number of users"<<endl;
            cout<<"For one user press (1), For known number of users press (2), and For unknown number of users press (3): ";//to specify the number of users
            cin>>option;
                switch(option){
                    case 1://for single user
                        cout<<"\nEnter your gender (M) or (F): ";
                        cin>>gender;
                        if(gender=='F'||gender=='f'||gender=='M'||gender=='m'){
                            if(gender=='F'||gender=='f'){
                                cout<<"Enter your weight in kilograms: ";
                                cin>>weight;
                                cout<<"Enter your height(e.g:- 1.50 for one meter and 50 cm tall)";
                                cin>>height;
                                bmi=weight/pow(height,2);//formula of BMI
                                    if(bmi>=18.0&&bmi<=23.0){
                                        cout<<"Your BMI is ("<<bmi<<") ,and you have a healthy weight";
                                    }
                                    else if(bmi<18.0){
                                        cout<<"Your BMI is ("<<bmi<<") ,and you are underweight"<<endl<<"Please consult your doctor or nutrishinist";
                                    }
                                    else {
                                        cout<<"Your BMI is ("<<bmi<<") ,and you are overweight";
                                    }

                                }

                            else if(gender=='M'||gender=='m'){
                                cout<<"Enter your weight in kilograms: ";
                                cin>>weight;
                                cout<<"Enter your height(e.g:- 1.50 for one meter and 50 cm tall)";
                                cin>>height;
                                bmi=weight/pow(height,2);//formula of BMI
                                    if(bmi>=20.0&&bmi<=25.0){
                                        cout<<"Your BMI is ("<<bmi<<") ,and you have a healthy weight";
                                    }
                                    else if(bmi<20.0){
                                        cout<<"Your BMI is ("<<bmi<<") ,and you are underweight"<<endl<<"Please consult your doctor or nutrishinist";
                                    }
                                    else {
                                        cout<<"Your BMI is ("<<bmi<<") ,and you are overweight";
                                    }
                            }
                            }
                              else{
                                cout<<"Invalid input";
                            }
                            break;

                   case 2://for known number of users
                        cout<<"Enter the number of users: ";
                        cin>>num_users;
                        for(int i=0;i<=num_users;i++){
                            cout<<"\nEnter your gender (M) or (F): ";
                            cin>>gender;
                            if(gender=='F'||gender=='f'||gender=='M'||gender=='m'){
                                if(gender=='F'||gender=='f'){
                                    cout<<"Enter your weight in kilograms: ";
                                    cin>>weight;
                                    cout<<"Enter your height(e.g:- 1.50 for one meter and 50 cm tall)";
                                    cin>>height;
                                    bmi=weight/pow(height,2);//formula of BMI
                                        if(bmi>=18.0&&bmi<=23.0){
                                            cout<<"Your BMI is ("<<bmi<<") ,and you have a healthy weight";
                                        }
                                        else if(bmi<18.0){
                                            cout<<"Your BMI is ("<<bmi<<") ,and you are underweight"<<endl<<"Please consult your doctor or nutrishinist";
                                        }
                                        else {
                                            cout<<"Your BMI is ("<<bmi<<") ,and you are overweight";
                                        }

                                    }

                                else if(gender=='M'||gender=='m'){
                                    cout<<"Enter your weight in kilograms: ";
                                    cin>>weight;
                                    cout<<"Enter your height(e.g:- 1.50 for one meter and 50 cm tall)";
                                    cin>>height;
                                    bmi=weight/pow(height,2);//formula of BMI
                                        if(bmi>=20.0&&bmi<=25.0){
                                            cout<<"Your BMI is ("<<bmi<<") ,and you have a healthy weight";
                                        }
                                        else if(bmi<20.0){
                                            cout<<"Your BMI is ("<<bmi<<") ,and you are underweight"<<endl<<"Please consult your doctor or nutrishinist";
                                        }
                                        else {
                                            cout<<"Your BMI is ("<<bmi<<") ,and you are overweight";
                                        }
                                }
                                }
                                  else{
                                    cout<<"Invalid input";
                                }
                        }
                        break;
                   case 3:
                           while(t==1){
                            cout<<"\nEnter your gender (M) or (F): ";
                            cin>>gender;
                            if(gender=='F'||gender=='f'||gender=='M'||gender=='m'){
                                if(gender=='F'||gender=='f'){
                                    cout<<"Enter your weight in kilograms: ";
                                    cin>>weight;
                                    cout<<"Enter your height(e.g:- 1.50 for one meter and 50 cm tall)";
                                    cin>>height;
                                    bmi=weight/pow(height,2);//formula of BMI
                                        if(bmi>=18.0&&bmi<=23.0){
                                            cout<<"Your BMI is ("<<bmi<<") ,and you have a healthy weight";
                                        }
                                        else if(bmi<18.0){
                                            cout<<"Your BMI is ("<<bmi<<") ,and you are underweight"<<endl<<"Please consult your doctor or nutrishinist";
                                        }
                                        else {
                                            cout<<"Your BMI is ("<<bmi<<") ,and you are overweight";
                                        }

                                    }

                                else if(gender=='M'||gender=='m'){
                                    cout<<"Enter your weight in kilograms: ";
                                    cin>>weight;
                                    cout<<"Enter your height(e.g:- 1.50 for one meter and 50 cm tall)";
                                    cin>>height;
                                    bmi=weight/pow(height,2);//formula of BMI
                                        if(bmi>=20.0&&bmi<=25.0){
                                            cout<<"Your BMI is ("<<bmi<<") ,and you have a healthy weight";
                                        }
                                        else if(bmi<20.0){
                                            cout<<"Your BMI is ("<<bmi<<") ,and you are underweight"<<endl<<"Please consult your doctor or nutrishinist";
                                        }
                                        else {
                                            cout<<"Your BMI is ("<<bmi<<") ,and you are overweight";
                                        }
                                }
                                }
                                  else{
                                    cout<<"Invalid input"<<endl;
                                }
                                t++;
                        }
                        break;
                    default:
                        cout<<"Invalid input";
                }
            return 0;
        }
