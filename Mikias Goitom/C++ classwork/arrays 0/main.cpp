    #include<iostream>
    #include<math.h>
    using namespace std;
    int main(){
float height[3];
float weight[3];
float bmi[3];
        for(int i=0;i<=3;i++)
            {
                cout<<"Enter height: ";
                cin>>height[i];
                 cout<<"Enter weight: ";
                cin>>weight[i];
                bmi[i]= weight[i]/pow(height[i],2);
                cout<<"Your BMI is: "<<bmi[i];}


   /* float daily_temp[7][3]
    float student_mark[50][5]
    float mon_rain[30][2][12]
    int i;
    for(i=0; i<=2;i++)
    cout<<x[i]<<" , ";*/
    return 0;
    }
