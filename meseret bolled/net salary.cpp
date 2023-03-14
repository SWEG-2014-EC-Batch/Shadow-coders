#include <iostream>
using namespace std;

int main() {
    float grsal, worhrs, otrate, otbonus, gift, pension, intax, netsal;
    const float PENSION_RATE = 0.07;
    int n;
    cout << "Enter the number of people: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
         cout << "Person " << i << endl;
        cout << "Enter gross salary: ";
        cin >> grsal;
     cout << "Enter worked hours: ";
    cin >> worhrs;
    cout << "Enter gift: ";
    cin >> gift;
    pension = grsal * PENSION_RATE;

    // calculate overtime bonus, if applicable
    if (worhrs > 40) {
        cout << "Enter overtime bonus rate/hour: ";
        cin >> otrate;
        otbonus = (worhrs - 40) * otrate;
    } else {
        otbonus= 0.0;
    }
if (grsal>=0 && grsal<=200) {intax= 0;}
else if (grsal >= 200 && grsal <= 600) {grsal= 0.01;}
else if (grsal>= 600 && grsal <= 1200) {intax= 0.15;}
else if (grsal >= 1200 && grsal <= 2000) {intax =0.15;}
else if (grsal >= 2000 && grsal <= 3500) {intax =0.20;}
else {intax =0.15;}
    // calculate net salary
    netsal= grsal - pension - (grsal * intax) + otbonus+ gift;

    cout << "Net salary: " << netsal<< endl;
    }
    return 0;
}


