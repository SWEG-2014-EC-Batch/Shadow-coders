#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int option,digit,sum=0,evenMulti=1, evenCounter=0,first,last,digits,nn,a,b,r,temp,rept,num2,rev=0,num,rem;

m:
    cout<<"\nType"<<endl;
   cout<<"1.To reverse the number to be inputted"<<endl ;
   cout<<"2.To count the number of digits"<<endl;
   cout<<"3.To find the sum of the digits"<<endl;
   cout<<"4 to find the product of even digits of the a given number "<<endl ;
   cout<<"5 to print the first and the last digit of the number and find their sum."<<endl ;
   cout<<"6 to swap the first and the last digit of the number."<<endl ;
   cout<<"7 to check whether a number is palindrome or not. "<<endl ;
   cout<<"8 to find the frequency of each digit in a given integer and print in table format."<<endl ;
   cout<<"9 to check if a number is Armstrong or not."<<endl ;
   cout<<"10 to check if a number is Strong or not."<<endl ;
   cout<<"11 to check whether a number is Perfect number or not."<<endl ;
l:  cout<<" enter a number from 1 up to 11 according to your choice"<<endl;
    cin>>option;
switch(option)
{
 case 1:
    cout<<"enter any number";
    cin>>num;
    while(num>0){
            rev=rev*10;
    rev=rev+num%10;
    num=num/10;
    }
    cout<<"Reversed number is "<<rev;

    break;

  case 2:
    cout<<"enter a number"<<endl;
    cin>>num;
    for (digit=0;num>0; digit++)
        num=num/10;
    cout<<"total digits = "<<digit<<endl;
    break;
  case 3:
    cout<<"enter a number";
    cin>>num;
    while (num>0)
    {
        rem=num%10;
        sum =sum+rem;
        num=num/10;

    }
    cout<<"the sum is"<<sum;
    break;
case 4:
    cout<<"enter a number"<<endl;
    cin>>num;
    while (num>0)
    {
        rem=num%10;
        num=num/10;
        if(rem%2==0){
          evenMulti=evenMulti*rem;
          evenCounter++;
          }

    }
    if (evenCounter==1)
        cout<<"there is one even digit in this number";
    else if (evenCounter>1)
        cout<<"the product of the even digit is "<<evenMulti;
    else
        cout<<"there is no even digit in this number";
        break;
case 5:
    cout<<"input any number";
    cin>>num;
    first=num;
    last=num%10;
    for(first=num;first>=10;first=first/10)
        cout<<"the first digit of"<<num<<"is: "<<first<<endl;
        cout<<"the last digit of "<<num<<"is: "<<last<<endl;
        sum=first+last;
        cout<<"sum is"<<sum;

break;
case 6:
    cout<<"input any number ";
    cin>>num;
    digits=(int)log10(num);
    first=num/pow(10,digits);
    last=num%10;
    a=first*(pow(10, digits));
    b=num%a;
    num=b/10;
    nn=last*(pow(10, digits))+ (num*10)+first;
    cout<<"the number after swaping the first and last digit are: "<<nn<<endl;
    break;
case 7:

    cout<<"enter the number "<<endl;
    cin>>num;
    temp=num;
    while(num>0)
    {
        r=num%10;
        sum=(sum*10)+r;
        num=num/10;
    }
    if (temp==sum)
       cout <<"the number is palindrome ";
    else
       cout <<"the number is not palindrome";
break;

case 8:
    cout<<"enter a number "<<endl;
    cin>>num;
    for (int i=0; i< 10; i++)
    {
        cout<<"the frequency of " <<i<< " =";
        rept=0;
        for (int j =num; j>0; j=j/10)
        {
            r=j%10;
            if (r==i)
            {
                rept++;
            }
        }
        cout<<rept<<endl;

    }
    break;
case 9:
    cout<<"enter a number ";
    cin>>num;
    temp=num;
    while (num>0)
    {
        r=num%10;
        sum=sum+(r*r*r);
        num=num/10;
    }
    if (temp==sum)
        cout<<"Armstrong number "<<endl;
    else
        cout<<"not Armstrong number "<<endl;
    break;

case 10:
    cout<<"enter a number\n";
    cin>>num;
    num2=num;

    while(num>=1){
        int fact=1;
        rev=num%10;
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
case 11:
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


default :
    cout<<"INVAlID INPUT! please try again\n";
    goto l;
}

goto m;
return 0;
}
