#include <iostream>
#include <cmath>

using namespace std;

// global scope
string name = "Subh";
int integers = -20;
double doub = 2.1312;
float flo = .0123123123;

// void function
void hello(){
    cout << "Hello world!" << endl;
}

// return function
string nameFunc(string name){
    return "My full name is " + name;
}

int main()
{

    // local scope
    int age = 29;
    age = 30;
    hello();
    cout << "This is " << name << ", glad to have you here" << endl;

    // update string
    name = "Subahsish Ghosh\n";
    cout << nameFunc(name);
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
    cout << floor(1.46) << endl;
    cout << round(1.46) << endl;
    cout << ceil(1.46) << endl;


    // arrays
    int arr[] = {1,2,3,4};
    cout << arr[2] << endl;
    arr[2] = 1;
    cout << arr[2] << endl;

    // boolean
    bool isTrue = true;
    bool isFalse = false;
    if(isTrue || !isFalse) {
        cout << "if" << endl;
    } else if(isTrue && !isFalse) {
        cout << "else if" << endl;
    } else {
        cout << "else" << endl;
    }

    // switch cases
    int cases = 4;
    switch(cases) {
    case 1:
        name = "subhasish";
        break;
    case 2:
        name = "Suba Ghosh";
        break;
    case 3:
        name = "Auba";
        break;
    default:
        name = "SUBHASISH GHOSH";
        break;
    }
    cout << name << endl;

    return 0;
}
