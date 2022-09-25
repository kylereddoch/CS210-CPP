/*
Complete the PoundDog code by adding a constructor having a constructor initializer list that initializes age with 1, id with -1, and name with "NoName". Notice that MyString's default constructor does not get called
*/

#include <iostream>
#include <string>
using namespace std;

class MyString {
public:
    MyString();
    MyString(string s);
    string GetString() const { return str; };
    void   SetString(string s) { str = s; };
private:
    string str;
};

MyString::MyString() {
    cout << "MyString default constructor called" << endl;
    str = "";
}

MyString::MyString(string s) : str(s) {
}


class PoundDog {
public:
    PoundDog();
    void Print() const;

private:
    int age;
    int id;
    MyString name;
};

/* Your solution goes here  */

PoundDog::PoundDog() : age(1), id(-1), name("NoName") {};

void PoundDog::Print() const {
    cout << "age:  " << age << endl;
    cout << "id:   " << id << endl;
    cout << "name: " << name.GetString() << endl;
}

int main() {
    PoundDog currDog;
    currDog.Print();
    return 0;
}