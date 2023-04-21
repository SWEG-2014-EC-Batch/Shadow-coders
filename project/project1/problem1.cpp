#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long int x,y,w=0,m=0;
    float sum1=0,sum2=0;
    cout<<"Enter the temp you want to cook with \n";
    cin>>x;
    y=x;
    cout<<"\n Your input tempreature is out of bound";
    
    for(;x>0;x/=10){
        ++w;
        
    }
    int s[w];
    for(int i=0;y>0;y/=10,i++){//used to store our input tempreature in our array
        s[i]=y%10;}
    for(int i=0;i<arraySize;i++){
    if(s[i]==1||s[i]==4||s[i]==7){
        condition=1;
        if(i==0){
        //cout<<"hi"<<endl;
        sum1+=(s[i]+1)*pow(10,i);
        sum2+=(s[i]-1)*pow(10,i);
        }

  else
            {   //cout<<"yee"<<endl;
                sum1=(s[i]+1)*pow(10,i);
                sum2=(s[i])*pow(10,i)-1;
            }
    }
    else
        {
        sum1+=s[i]*pow(10,i);
        sum2+=s[i]*pow(10,i);
        }
    }
if(m!=0){
    system("cls");
    cout<<"the least upper bound temperature you can cook with is "<<sum1<<"*c"<<endl<<"the highest lower bound temperature you can cook with is "<<sum2<<"*c"<<endl;
    }
else{
    system("cls");
    cout<<"you can cook with "<<sum1<<"*c"<<endl;
    }
return 0;
}
