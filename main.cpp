#include <iostream>
#include <cmath>

using namespace std;

// global scope
string name = "Subh";
int integers = -20;
double doub = 2.1312;
float flo = .0123123123;

int main()
{

    // local scope
    int age = 29;
    age = 30;
    cout << "Hello world!" << endl;
    cout << "This is " << name << ", glad to have you here" << endl;

    // update string
    name = "Subahsish Ghosh\n";
    cout << "My full name is " << name;
    cout << "My age is "  << age<< endl;

    // manipulate string
    name[0] = 'A';
    cout << "Modified name is " << name << endl;

    // get substring
    string subs = name.substr(0, 3);
    cout << "sub string is " << subs << endl;

    // find string
    int index = name.find("Ghosh");
    cout << "string starts at " << index << endl;

    // math functions
    cout << 3 + 2 << endl;
    cout << 3 % 2 << endl;
    cout << 2 % 2 << endl;
    integers += doub;
    cout << integers;
    cout << floor(1.46);
    cout << round(1.46);
    cout << ceil(1.46);


    return 0;
}
