#include <iostream>
using namespace std;

int main() {
	int rows;
		cout<<"enter the number of rows";
		cin>>rows;
  for (int i = 0; i < rows; i++) {
    for (int j = 1; j < rows - i; j++) {
      cout << " ";
    }
    // print stars
    for (int k = 0; k <= i; k++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}
