#include <iostream>
using namespace std;
void asker();
void greeter();
void a();
void b();
using namespace std;
string name;
int main()
{
    greeter();
    a();
    b();
    return 0;
}

void greeter()
{
    cout << "Hey there! what is your name?" << endl;
    cin >> name;
    cout << "Hello, " << name << "welcome to M.p.!" << endl;
}

void a()
{
    cout << "unnus annus" << endl;
    b();
}
void b()
{
    cout << "momento mori, bro" << endl;
    a();
}
