#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i =1; i <=rows; ++i) {
        for(int j = i; j <=1 ; --j) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;#include <iostream>
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
