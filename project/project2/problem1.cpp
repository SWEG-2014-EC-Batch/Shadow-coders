#include<iostream>
using namespace std;
int main(){
  else if(dataType=='R'dataType=='r'){
    for(int i=0;i<13;i++){
        searchMonthInfo[i]=month[1][i];
        for(int i=0;i<13;i++){
            in1[i]=month[2][i];
            }
        for(int i=0;i<13;i++){
            in[i]=((int)(in1[i]/10))*10;
            }
        for(int i=0;i<13;i++){
            deci[i]=(in1[i]-in[i]);
        }
    }
    if(dataRepresentation=='G'||dataRepresentation=='g'){
        for(int i=0;i<13;i++){
            cout<<input[i]<<" ";
            cout<<month[2][i]<<endl;
        }
        cout<<endl<<endl;
        system("cls");cout<<"\t\t\t\t\t\t\tactual rain fall bar graph"<<endl;
        cout<<"\t\t\t\t\t\t\t--------------------------"<<endl<<endl<<endl;
        for(int j=12;j>=0;j--){
            cout<<input[j];
            if(month[0][j]==5||month[0][j]==10){
                cout<<"    ";
            }
            else if(month[0][j]==3||month[0][j]==11){
                cout<<"   ";
            }
            else if(month[0][j]==6||month[0][j]==7){
                cout<<" ";
            }
            else if(month[0][j]==2||month[0][j]==4||month[0][j]==9||month[0][j]==12||month[0][j]==13){
                cout<<"  ";
            }
            else{
                cout<<"";
            }

            if(in[j]-500>=0){
                cout<<"|||";
                for(int i=0;i<in[j]-500;i+=100){
                    cout<<"|||||||";
                    }
                if(deci[j]>0&&deci[j]<50){
                    cout<<"";
                    }
                else if (deci[j]==50){
                    cout<<"|";
                    }
                else if(deci[j]>5&&deci[j]<99){
                    cout<<"|||||";
                    }
                }
                    cout<<endl<<endl;
                }

        cout<<"        0";
        for(int i=500;i<=2000;i+=100){
            if(i<1000){
                cout<<"    ";
            }
            else{
                cout<<"   ";
            }
            cout<<i;
            }
            cout<<endl;
        }


    else if(dataRepresentation=='T'||dataRepresentation=='t'){
        cout<<"---------------------------------"<<endl;
        cout<<"|  month    |actual rainfall(mm)|"<<endl;
        cout<<"---------------------------------"<<endl;
        for(int j=0;j<13;j++){
            cout<<input[j];
            if(month[0][j]==5||month[0][j]==10){
                cout<<"    ";
            }
            else if(month[0][j]==3||month[0][j]==11){
                cout<<"   ";
            }
            else if(month[0][j]==6||month[0][j]==7){
                cout<<" ";
            }
            else if(month[0][j]==2||month[0][j]==4||month[0][j]==9||month[0][j]==12||month[0][j]==13){
                cout<<"  ";
            }
                cout<<"    |     ";
            cout<<month[1][j]<<endl;
            cout<<"---------------------------------"<<endl;
        }
    }
}
return 0;
}
