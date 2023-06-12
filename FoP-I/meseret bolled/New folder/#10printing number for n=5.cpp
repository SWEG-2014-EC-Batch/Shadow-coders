#include <iostream>
using namespace std;

int main() {

    int rows=5;

    //cout << "Enter number of rows: ";
    //cin >> rows;
    for(int x=1;x<=5; x++)    
	{
    	for(int y=1;y<=x;y++)
    {
			cout<<y<<" ";
			}
        cout << "\n";
    }
    return 0;
}
