#include <iostream>
using namespace std;
class Laptop {
public:
    string brand;
    Laptop(string b) {
        brand = b;
    }
};
class Student {
public:
    string name;
    Laptop* lap;

    Student(string n, Laptop* l) {
        name=n;
        lap=l;
    }
    void show() {
        cout<<name<<"use"<<lap->brand<<"laptop"<<endl;
    }
};



int main() {
    Laptop l1("Dell");
    Student s1("Narayan", &l1);
    s1.show();
    return 0;
}