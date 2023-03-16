#include <iostream>
using namespace std;

int main() {

   int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i =rows; i >=1; i--) {
        for(int j =rows-i; j> 0; --j)
            cout << " ";

        for(int j = i; j> 0 ; j--)
		         cout << " * ";

        cout << endl;
    }

    return 0;
}
