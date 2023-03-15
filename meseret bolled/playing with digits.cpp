#include <iostream>
using namespace std;
int main()
{int num,r,reverse;
int temp=num;
cout<<"enter a number";
cin>>num;
while(num)
{r=(r*10)+num%10;//num=num/10
num/=10;
}
{cout<<"the reverse is"<<r;
}
return 0;
}

