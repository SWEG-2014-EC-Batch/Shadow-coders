#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int choice;
    m:cout<<"type:\n    1 for a full box\n    2 for hallow box\n    3 for an upright half triangle\n    4 for a hallow upright triangle\n    5 for an upside down half triangle\n    6 for a hallow upside down half triangle\n    7 for a full triangle\n    8 for a hallow triangle\n    9 for an inverted full triangle\n    10 for 5 by 5 square with repeating '12345'\n    11 for a half triangle that counts for 1 to the number of its row\n    12 for a flipped triangle the start with the row number the count down to 1\n    13 for rectangle that has repeating abcde\n    14 for rectangle that has the uppercase alphabet\n    15  for a half triangle that has increasing uppercase letters\n";
    l:cin>>choice;
    switch(choice){
    case 1:
    cout<<"enter first the horizontal and then vertical the resolution you want.\n";
    cin>>x>>y;
    for(int i=1; i<=y;i++){
        for(int j = 1; j<=x;j++){
           cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    goto m;
    break;
    case 2:
    cout<<"enter first the horizontal and then vertical the resolution you want.\n";
    cin>>x>>y;
    for(int i=1; i<=y;i++){
        for(int j = 1; j<=x;j++){
            if(i==1||i==y||j==1||j==x){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    cout<<endl;
    goto m;
    break;
    case 3:
    cout<<"enter first the horizontal and then vertical the resolution you want.\n";
    cin>>x>>y;
    for(int i = 1; i<=y;i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    goto m;
    break;
    case 5:
    cout<<"enter first the horizontal and then vertical the resolution you want.\n";
    cin>>x>>y;
    for(int i = 5; i>=1;i--){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    goto m;
    break;
    case 4:
    cout<<"enter first the horizontal and then vertical the resolution you want.\n";
    cin>>x>>y;
     for(int i = 1; i<=y;i++){
        for(int j=1; j<=i;j++){
            if(i==1||j==1||j==i||i==x){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
     goto m;
     break;
     case 6:
    cout<<"enter first the horizontal and then vertical the resolution you want.\n";
    cin>>x>>y;
     for(int i = 5; i>=1;i--){
        for(int j=1; j<=i;j++){
            if(j==1||j==i||i==5){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    goto m;
    break;
     case 7:
    cout<<"enter a dimension that will be applied to the horizontal and then vertical the resolution you want.\n";
    cin>>y;
    for(int i=1;i<=y;i++){
        for(int j=y;j>i;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";

        }
    for(int k=1;k<i;k++){
                    cout<<"*";
                }
        cout<<endl;
    }
    goto m;
    break;
     case 8:
        cout<<"enter a dimension that will be applied to the horizontal and then vertical the resolution you want.\n";
        cin>>y;
        for(int i=1;i<=y;i++){
        for(int j=y;j>i;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1||i==y){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
    for(int k=1;k<i;k++){
                    if(k>=i-1||i==y){
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
        cout<<endl;}
    goto m;
    break;
     case 9:
        for(int i=1;i<=y;i++){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=5;j>=i;j--){
            cout<<"*";

        }
   for(int k=y;k>i;k--){
                cout<<"*";
    }
        cout<<endl;}
        goto m;
        break;
     case 10:
        for(int i=1;i<=5;i++){
            for(int j=1;j<=5;j++){
                cout<<j;
            }
            cout<<endl;
        }
        goto m;
        break;
     case 11:
        cout<<endl;
        for(int i =1;i<=5;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            cout<<endl;
        }
        goto m;
        break;
     case 12:
        cout<<endl;
        for(int i =1;i<=5;i++){
            for(int j=5;j>i;j--){
            cout<<" ";
            }
            for(int j=1,k=i;j<=i;j++,k--){
                cout<<k;
            }
            cout<<endl;
        }
        goto m;
        break;
     case 13:
        for (int i=1;i<=5;i++){
            for(int j=0;j<=4;j++){
                cout<<(char)(97+j);
            }
            cout<<endl;
        }
        goto m;
        break;
     case 14:
        cout<<endl;
        for (int i=1,k=0;i<=4;i++){
            for(int j=0;j<=5;j++){
                cout<<(char)(65+k);
                k++;
            }
            cout<<endl;
        }
        goto m;
        break;
        case 15:
        cout<<endl;
        for (int i=0;i<=4;i++){
            for(int j=0;j<=i;j++){
                cout<<(char)(65+j);
            }
            cout<<endl;
        }
        goto m;
        break;

     default:

        cout<<"wrong input try again\n";
        goto l;

    }



    return 0;
}

