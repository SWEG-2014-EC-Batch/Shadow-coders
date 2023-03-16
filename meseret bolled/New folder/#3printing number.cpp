#include <iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"enter the number of rows";
	cin>>rows;
	     for(int i =1 ; i <=rows; ++i) {

        for(int j = i; j >= 1; --j) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

