#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int num,rev,choice,digit=0,sum=0,evenMulti=1,evenCounter=0,firstDig,lastDig,power=0,num2,e=0;
float Num,digits;
m:cout<<"\nType \n    1 to reverse the number to be inputted\n    2 to count the number of digits\n    3 to find the sum of the digits\n    4 to find the product of even digits of the a given number\n    5 to print the first and the last digit of the number and find their sum.\n    6 to swap the first and the last digit of the number.\n    7 to check whether a number is palindrome or not.\n    8 to find the frequency of each digit in a given integer and print in table format.\n    9 to check if a number is Armstrong or not.\n    10 to check if a number is Strong or not.\n    11 to check whether a number is Perfect number or not.\n";
l:cin>>choice;
//switch(choice){
if(choice==1){
    cout<<"enter a number\n";
    cin>>num;
    cout<<"the reverse is ";
    while(num>=1){
        rev=num%10;//num=num/10
        num/=10;
        cout<<rev;
    }

}
else if(choice==2){
    cout<<"enter a number\n";
    cin>>Num;
    while(Num>=1){
        Num/=10;
        digit++;
    }
    cout<<"there are "<<digit<<" digits in the number you have enter\n";
}
else if(choice==3){
    cout<<"enter a number\n";
    cin>>num;
    cout<<"the sum of the digits is ";
    while(num>=1){
        rev=num%10;//num=num/10
        num/=10;
        sum+=rev;

    }
    cout<<sum;}
else if(choice==4){
    cout<<"enter a number\n";
    cin>>num;
    while(num>=1){
        rev=num%10;
        num/=10;
        if(rev%2==0){
            evenMulti*=rev;
            evenCounter++;
        }
    }
    if(evenCounter==1){
        cout<<"only one digit was even from the number you have entered which is '"<<evenMulti<<"' and so the product of even digit can not be calculated\n"<<endl;
    }
    else if(evenCounter>1){
        cout<<"the product of the even digits is "<<evenMulti<<endl;
    }
    else{
        cout<<"there was no even digit in the number entered\n";
    }

}
else if(choice==5){
    cout<<"enter a number\n";
    cin>>num;
    digit=num;
    cout<<"the rearranged number is ";
    while(num>10){
        rev=num%10;
        num/=10;
        if(num==digit/10){
            lastDig=rev;
        }
        power++;
    }
    firstDig=num;
    cout<<"the fist digit "<<firstDig<<" and the last digit "<<lastDig<<" and their sum is "<<firstDig+lastDig<<endl;
}
else if(choice==6){
    cout<<"enter a number\n";
    cin>>num;
    digit=num;
    cout<<"the rearranged number is ";
    while(num>10){
        rev=num%10;
        num/=10;
        if(num==digit/10){
            lastDig=rev;
        }
        power++;
    }
    firstDig=num;
    cout<<lastDig*pow(10,power)+digit-firstDig*pow(10,power)-lastDig+firstDig;
}
else if(choice==7){
    int e=0;
    cout<<"enter a number\n";
    cin>>num;
    digit=num;
    num2=num;
    while(digit>=10){
        rev=digit%10;//num=num/10
        digit/=10;
        power++;
    }
    while(num>=1&&power>=0){
        rev=num%10;//num=num/10
        num/=10;
        e=e+rev*pow(10,power);
        power--;
    }
    if(e==num2){
        cout<<"the number you have entered is a palindromic number.\n";
    }
    else{
        cout<<"the number you have entered is not a palindromic number.\n";
    }

    }
else if(choice==8){
    int coun0=0,coun1=0,coun2=0,coun3=0,coun4=0,coun5=0,coun6=0,coun7=0,coun8=0,coun9=0;
    cout<<"enter a number\n";
    cin>>num;
    while(num>=1){
        rev=num%10;//num=num/10
        num/=10;
        switch(rev){
            case 0:
                coun0++;
                break;
            case 1:
                coun1++;
                break;
            case 2:
                coun2++;
                break;
            case 3:
                coun3++;
                break;
            case 4:
                coun4++;
                break;
            case 5:
                coun5++;
                break;
            case 6:
                coun6++;
                break;
            case 7:
                coun7++;
                break;
            case 8:
                coun8++;
                break;
            case 9:
                coun9++;
                break;
        }}
        cout<<"____________________________"<<endl;
        cout<<" digit type  |  frequency "<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      0      |     "<<coun0<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      1      |     "<<coun1<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      2      |     "<<coun2<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      3      |     "<<coun3<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      4      |     "<<coun4<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      5      |     "<<coun5<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      6      |     "<<coun6<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      7      |     "<<coun7<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      8      |     "<<coun8<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"      9      |     "<<coun9<<endl;
        cout<<"----------------------------"<<endl;
}
else if(choice==9){
    int e=0;
    cout<<"enter a number\n";
    cin>>num;
    Num=num;
    num2=num;
    while(num2>=1){
        num2/=10;
        ++digit;
    }
    cout<<digit<<endl;
    num2=num;
    while(num>0){
        rev=num%10;//num=num/10
        //cout<<rev;
        sum=sum+pow(rev,digit);
        num/=10;
        //cout<<pow(rev,digit)<<"+";
    }
    //cout<<endl<<sum<<endl;
    if(sum==num2){
        cout<<"the number you have entered is an Armstrong number"<<endl;
    }
    else{
        cout<<"the number you have entered is not an Armstrong number"<<endl;
    }
}
else if(choice==10){
    cout<<"enter a number\n";
    cin>>num;
    num2=num;
    //cout<<"the reverse is ";
    while(num>=1){
        int fact=1;
        rev=num%10;//num=num/10
        num/=10;
        for(int i=0;i<rev;i++){
            fact=fact*(rev-i);
        }

        sum=sum+fact;
    }
    if(sum==num2){
        cout<<"the number you have entered is a strong number\n";
    }
    else{
        cout<<"the number you have entered is not a strong number\n";
    }
    }
else if(choice==11){
    cout<<"enter a number\n";
    cin>>num;
    for(int i=1; i<num; i++){
        if(num%i==0){
            sum+=i;
        }
    }
    cout<<sum<<endl;
    if(sum==num){
        cout<<"the number you have entered is a perfect number\n";
    }
    else{
        cout<<"the number you have entered is not a perfect number\n";
    }
    }

else{
    cout<<"INVAlID INPUT! please try again\n";
    goto l;
}

goto m;
return 0;
}
