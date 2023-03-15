#include <iostream>
using namespace std;

int main()

{ int r, c;
cout << "Enter the number of rows:";
cin >> r;
cout << "Enter the number of column:";
cin >> c;
    for (int i=1; i<=r; i++){
    for (int k=1; k<=c; k+=1)
    {cout << "* ";
    }
    cout<< endl;
}
}
