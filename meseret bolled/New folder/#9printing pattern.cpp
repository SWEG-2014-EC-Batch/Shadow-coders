#include <iostream>
using namespace std;

int main() {

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;
    for(int x=1;x<=rows; x++)    
	{
    	for(int y=1;y<=x;y++)
    {
			cout<<y<<" ";
			}
    //for(int i = 1; i <= rows; ++i) {
       // for(int j = 1; j <= i; ++j) {
           // cout << j << " ";
        //}
        cout << "\n";
    }
    return 0;
}
