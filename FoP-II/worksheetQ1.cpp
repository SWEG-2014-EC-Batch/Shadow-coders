#include <iostream>
using namespace std;
/*
float mult(float x, float y);
int main()
{
    float a, b;
    cin >> a >> b;
    mult(a, b);
    // return 0;
}
float mult(float x, float y)
{
    cout << x * y << endl;
    return x * y;
}

*/
bool isLeepYear();
bool NotLeepYear();
void checker();
void UI();
int year;
int main()
{
    UI();
    return 0;
}
void UI()
{
    cout << "enter the year: ";
    cin >> year;
    checker();
}
void checker()
{
    if (year % 4 == 0 && year % 100 != 0)
    {
        cout << isLeepYear();
    }
    else if (year % 100 == 0 && year % 400 == 0)
    {
        cout << isLeepYear();
    }
    else
    {
        cout << NotLeepYear();
    }
}
bool isLeepYear()
{
    return true;
}
bool NotLeepYear()
{
    return false;
}
