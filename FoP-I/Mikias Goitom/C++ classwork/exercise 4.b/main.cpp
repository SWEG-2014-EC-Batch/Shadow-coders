
    cout<<"enter a number\n";
    cin>>Num;
    while(Num>=1){
        Num/=10;
        digit++;
    }
    cout<<"there are "<<digit<<" digits in the number you have enter\n";
