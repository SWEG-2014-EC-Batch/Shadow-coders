#include <iostream>
#include <math.h>

using namespace std;

int main(){
    
    int x,storeTemp,w=0,m=0;
    float sum1=0,sum2=0;
    cout<<"Enter the temp you want to cook with \n";
    cin>>x;
    if(inputTemperature>999||inputTemperature<0){
           cout<<"\n Your input tempreature is out of bound";
    storeTemp=x;
    for(;x>0;x/=10){//this for loop calculates the number of digits our input has, which will be used to initialize the size of our array
        ++w;  
    }
    
    int s[w];
    
    for(int i=0;storeTemp>0;storeTemp/=10,i++){//used to store our input tempreature in our array
        s[i]=y%10;
    }
    
    for(int i=0;i<arraySize;i++){
        if(s[i]==1||s[i]==4||s[i]==7){
            
            condition=1;
            
            if(i==0){
                sum1+=(s[i]+1)*pow(10,i);
                sum2+=(s[i]-1)*pow(10,i);
            }
            else{ 
                sum1=(s[i]+1)*pow(10,i);
                sum2=(s[i])*pow(10,i)-1;
            }
        }
        else{
            sum1+=s[i]*pow(10,i);
            sum2+=s[i]*pow(10,i);
        }
    }
    
if(m!=0){//if our input temperature has the digits 1, 4, or 7
    system("cls");
    cout<<"the least upper bound temperature you can cook with is "<<sum1<<"*c"<<endl<<"the highest lower bound temperature you can cook with is "<<sum2<<"*c"<<endl;
    }
else{//if our input temperature doesn't has the digits 1, 4, or 7
    system("cls");
    cout<<"you can cook with "<<sum1<<"*c"<<endl;
    }
return 0;
}
