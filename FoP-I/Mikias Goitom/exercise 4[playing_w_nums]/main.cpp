//This is a program for playing with numbers. It has 11 different programs with in it.
#include <iostream>
#include <math.h>//we are going to use pow()
using namespace std;
int option,num,rev_num=0,digit=0,sum=0,evProduct=1,even_nums=0,firstDig,lastDig,power=0,num2;
float Num,digits;
int main(){
d:cout<<"\n========== Playing With Numbers ========== \n  **Press** \n    1 to reverse the number to be inputted\n    2 to count the number of digits\n    3 to find the sum of the digits\n    4 to find the products of even digits of the a given number\n    5 to print the first and the last digit of the number and find their sum.\n    6 to swap the first and the last digit of the number.\n    7 to check whether a number is palindrome or not.\n    8 to find the frequency of each digit in a given integer and print in table format.\n    9 to check if a number is Armstrong or not.\n    10 to check if a number is Strong or not.\n    11 to check whether a number is Perfect number or not.\n";
a:cin>>option;
if(option==1){
    cout<<"Enter a number";
    cin>>num;
    cout<<"the reverse is ";
    while(num>=1){
        rev_num=num%10;
        num/=10;
        cout<<rev_num;
    }

}
else if(option==2){
    cout<<"Enter a number"<<endl;
    cin>>Num;
    while(Num>=1){
        Num/=10;
        digit++;
    }
    cout<<"There are ("<<digit<<") digits in the number you have enter\n";
}
else if(option==3){
    cout<<"Enter an integer"<<endl;
    cin>>num;
    cout<<"The sum of the digits is: ";
    while(num>=1){
        rev_num=num%10;
        num/=10;
        sum+=rev_num;

    }
    cout<<sum;}
else if(option==4){
    cout<<"Enter a number"<<endl;
    cin>>num;
    while(num>=1){
        rev_num=num%10;
        num/=10;
        if(rev_num%2==0){
            evProduct*=rev_num;
            even_nums++;
        }
    }
    if(even_nums==1){
        cout<<"The product of the even digits is:" <<evProduct<<endl;
    }
    else if(even_nums>1){
        cout<<"The product of the even digits is: "<<evProduct<<endl;
    }
    else{
        cout<<"The number you entered doesn't have an even number"<<endl;
    }

}
else if(option==5){
    cout<<"Enter a number\n";
    cin>>num;
    digit=num;
    cout<<"The rearranged of your number is: ";
    while(num>10){
        rev_num=num%10;
        num/=10;
        if(num==digit/10){
            lastDig=rev_num;
        }
        power++;
    }
    firstDig=num;
    cout<<"The fist digit "<<firstDig<<" and the last digit "<<lastDig<<" and their sum is "<<firstDig+lastDig<<endl;
}
else if(option==6){
    cout<<"enter a number\n";
    cin>>num;
    digit=num;
    cout<<"The rearranged of your number is: ";
    while(num>10){
        rev_num=num%10;
        num/=10;
        if(num==digit/10){
            lastDig=rev_num;
        }
        power++;
    }
    firstDig=num;
    cout<<lastDig*pow(10,power)+digit-firstDig*pow(10,power)-lastDig+firstDig;
}
else if(option==7){
    cout<<"Enter a number"<<endl;
    cin>>num;
    num2=num;

     do
     {
         digit = num % 10;
         rev_num = (rev_num * 10) + digit;
         num = num / 10;
     } while (num != 0);
     if (num2 == rev_num){
         cout << " The number is a palindrome.";
     }
     else{
         cout << " The number is not a palindrome.";
     }
    }
else if(option==8){
    int coun0=0,coun1=0,coun2=0,coun3=0,coun4=0,coun5=0,coun6=0,coun7=0,coun8=0,coun9=0;
    cout<<"Enter a number"<<endl;
    cin>>num;
    while(num>=1){
        rev_num=num%10;
        num/=10;
        switch(rev_num){
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
        cout<<" Digit Type  |  Frequency "<<endl;
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
else if(option==9){
    int e=0;
    cout<<"Enter a number\n";
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
        rev_num=num%10;

        sum=sum+pow(rev_num,digit);
        num/=10;
    }
    if(sum==num2){
        cout<<"the number you have entered is an Armstrong number"<<endl;
    }
    else{
        cout<<"the number you have entered is not an Armstrong number"<<endl;
    }
}
else if(option==10){
    cout<<"Enter a number"<<endl;
    cin>>num;
    num2=num;

    while(num>=1){
        int fact=1;
        rev_num=num%10;
        num/=10;
        for(int i=0;i<rev_num;i++){
            fact=fact*(rev_num-i);
        }

        sum=sum+fact;
    }
    if(sum==num2){
        cout<<"The number you have entered is a strong number"<<endl;
    }
    else{
        cout<<"The number you have entered is not a strong number"<<endl;
    }
    }
else if(option==11){
    cout<<"Enter a number\n";
    cin>>num;
    for(int i=1; i<num; i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        cout<<"The number you have entered is a perfect number\n";
    }
    else{
        cout<<"The number you have entered is not a perfect number\n";
    }
    }
else{
    cout<<"Invalid input!"<<endl;
    cout<<" please try again\n";
    goto a;
}

goto d;
return 0;
}
