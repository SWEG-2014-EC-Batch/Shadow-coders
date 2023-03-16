//This program have 15 different printing styles
#include <iostream>
using namespace std;
int main()
{
    int x;//horizontal dimension
    int y;//vertical dimension
    int choice;
    cout<<"======== Printing Patterns ========";
    a:cout<<"\n**Press**\n    1 For a full box pattern\n    2 For hallow box pattern\n    3 For an upright half triangle pattern\n    4 For a hallow upright triangle pattern\n    5 For an upside down half triangle pattern\n    6 For a hallow upside down half triangle pattern\n    7 For a full triangle pattern\n    8 For a hallow triangle pattern\n    9 For an inverted full triangle pattern\n    10 For 5 by 5 square with repeating '12345' pattern\n    11 For a half triangle that counts for 1 to the number of its row\n    12 For a flipped triangle that starts with the row number and count up to 1\n    13 For rectangle that has repeating abcde\n    14 For rectangle that has the uppercase alphabet from A-X\n    15 For a half triangle that has increasing uppercase letters to the left\n";
    b:cout<<"\nEnter :";
    cin>>choice;
    switch(choice){
    case 1:
    cout<<"Enter the horizontal dimension: ";
    cin>>x;
    cout<<"Enter the vertical dimension: ";
    cin>>y;
    for(int i=1; i<=y;i++){
        for(int h = 1; h<=x;h++){
           cout<<" *";
        }
        cout<<endl;
    }
    cout<<endl;
    goto a;
    break;

    case 2:
    cout<<"Enter the horizontal dimension: ";
    cin>>x;
    cout<<"Enter the vertical dimension: ";
    cin>>y;
    for(int i=1; i<=y;i++){
        for(int h= 1; h<=x;h++){
            if(i==1||i==y||h==1||h==x){
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    cout<<endl;
    goto a;
    break;

    case 3:
    cout<<"Enter the horizontal dimension: ";
    cin>>x;
    cout<<"Enter the vertical dimension: ";
    cin>>y;
    for(int i = 1; i<=y;i++){
        for(int h=1; h<=i;h++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    goto a;
    break;

    case 4:
    cout<<"Enter the horizontal dimension: ";
    cin>>x;
    cout<<"Enter the vertical dimension: ";
    cin>>y;
     for(int i = 1; i<=y;i++){
        for(int h=1; h<=i;h++){
            if(i==1||h==1||h==i||i==x){
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
     goto a;
     break;

         case 5:
    cout<<"Enter the horizontal dimension: ";
    cin>>x;
    cout<<"Enter the vertical dimension: ";
    cin>>y;
    for(int i = 5; i>=1;i--){
        for(int h=1; h<=i;h++){
            cout<<" *";
        }
        cout<<endl;
    }
    cout<<endl;
    goto a;
    break;

     case 6:
    cout<<"Enter the horizontal dimension: ";
    cin>>x;
    cout<<"Enter the vertical dimension: ";
    cin>>y;
     for(int i = 5; i>=1;i--){
        for(int h=1; h<=i;h++){
            if(h==1||h==i||i==5){
                cout<<" *";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    goto a;
    break;

     case 7:
    cout<<"Enter the dimension for the horizontal and then vertical: ";
    cin>>x;
    for(int i=1;i<=x;i++){
        for(int h=x;h>i;h--){
            cout<<"  ";
        }
        for(int h=1;h<=i;h++){
            cout<<" *";

        }
    for(int j=1;j<i;j++){
                    cout<<" *";
                }
        cout<<endl;
    }
    goto a;
    break;

    case 8:
        cout<<"Enter the dimension for the horizontal and then vertical: ";
        cin>>x;
        for(int i=1;i<=x;i++){
        for(int h=1;h<=i;h++){
            cout<<"  ";
        }
        for(int h=5;h>=i;h--){
            cout<<" *";

        }
        for(int j=x;j>=i;j--){
                cout<<"* ";
        }
        cout<<endl;}
        goto a;
        break;

     case 9:
        cout<<"Enter the dimension for the horizontal and then vertical: ";
        cin>>x;
            for (int i=0; i<6; i++){
            for (int h=6; h>i; h--){
        cout<<" ";
        }
        cout<<"*";

            if (i!=0){
                for (int j=1; j<=x; j++){
                cout<<" ";
                }
                cout<<"*";
                x+=2;
                }
                cout<<endl;
            }

        for (int i=0; i<=x+1; i++){
            cout<<"*";
        }
            cout<<endl;
            goto a;
            break;

     case 10:

        for(int i=1;i<=5;i++){
            for(int h=1;h<=5;h++){
                cout<<h;
            }
            cout<<endl;
        }
        goto a;
        break;
     case 11:

        cout<<endl;
        for(int i =1;i<=5;i++){
            for(int h=1;h<=i;h++){
                cout<<h;
            }
            cout<<endl;
        }
        goto a;
        break;
     case 12:

        cout<<endl;
        for(int i =1;i<=5;i++){
            for(int h=5;h>i;h--){
            cout<<" ";
            }
            for(int h=1,j=i;h<=i;h++,j--){
                cout<<h;
            }
            cout<<endl;
        }
        goto a;
        break;

     case 13:
        for (int i=1;i<=5;i++){
            for(int h=0;h<=4;h++){
                cout<<(char)(97+h);
            }
            cout<<endl;
        }
        goto a;
        break;

     case 14:
        cout<<endl;
        for (int i=1,j=0;i<=4;i++){
            for(int h=0;h<=5;h++){
                cout<<(char)(65+j);
                j++;
            }
            cout<<endl;
        }
        goto a;
        break;

        case 15:
        cout<<endl;
        for (int i=0;i<=4;i++){
            for(int h=0;h<=i;h++){
                cout<<(char)(65+h);
            }
            cout<<endl;
        }
        goto a;
        break;

     default:
        cout<<"Invaild input!"<<endl;
        cout<<"Please try again"<<endl;
        goto b;

    }

    return 0;
}
