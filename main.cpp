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

class Book {
    public:
        string title;
        string author;
        int pages;

        Book(string cTitle, string cAuthor, int cPages) {
            title = cTitle;
            author = cAuthor;
            pages = cPages;
        }

};

class Student {
    private:
        double gpa;
    public:
        string name;
        string major;

    Student(string cName, string cMajor, double cGpa) {
        name = cName;
        major = cMajor;
        setGpa(cGpa);
    }

    // setter
    void setGpa(double cGpa) {
        if(cGpa >= 0 && cGpa <= 5) {
            gpa = cGpa;
        } else {
            cout << "Invalid GPA" << endl;
        }
    }

    // getter
    double getGpa() {
        if(gpa >= 0 && gpa <= 5) {
            return gpa;
        } else {
            cout << "Invalid GPA" << endl;
        }
    }

    // object function
    bool hasHonours() {
        if(gpa > 3.5) {
            return true;
        }
        return false;
    }

};

// inheritance
// base class
class Parent
{
    public:
      int id_p;
};

// sub class inheriting from base class
class Child : public Parent
{
    public:
      int id_c;
};

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

    // while loop
    int counter = -20;
    while(counter < -10) {
        cout << counter << endl;
        counter++;
    }
    // for loop
    int arr2[] = {10,20,30,40};
    int arr3[4][2] = {
        {1,10},
        {2,20},
        {3,30},
        {4,40}
        };
    cout << sizeof(arr2) << endl;
    for(int counter = 0; counter < sizeof(arr2); counter++) {
        cout << arr2[counter] << endl;
    }

    // pointer memory address
    cout << &counter << endl;
    string *pName = &name; // pointer int variable
    cout << pName << endl;
    cout << *pName << endl; // dereferencing pointer
    cout << *&name << endl; // dereferencing pointer
    int *pCounter = &counter; // pointer int variable
    cout << pCounter << endl;
    cout << *pCounter << endl; // dereferencing pointer
    double *pDoub = &doub; // pointer int variable
    cout << pDoub << endl;
    cout << *pDoub << endl; // dereferencing pointer

    Book book("Harry potter", "JK Rowling", 202);
    cout << book.title << endl;
    cout << book.author << endl;
    cout << book.pages << endl;
    book.pages = 208;
    cout << book.pages << endl;

    Student student("Subhasish", "Computer Science", 4.8);
    bool hasHons = student.hasHonours();
    cout << hasHons << endl;
    cout << student.getGpa() << endl; // getter and setter
    Student newStudent("Subhasish", "Computer Science", 2.8);
    cout << newStudent.hasHonours() << endl;
    cout << newStudent.getGpa() << endl; // getter and setter

    // inheritance
    Child obj1;
    // object of class child has all data members
    // and member functions of class parent
    obj1.id_c = 7;
    obj1.id_p = 91;
    cout << "Child id is " <<  obj1.id_c << endl;
    cout << "Parent id is " <<  obj1.id_p << endl;

    return 0;
}
