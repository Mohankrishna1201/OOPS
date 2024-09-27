#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;
    Person() { cout<<"parent\n ";}
    ~Person() {cout<<"parent deleted\n";}
    Person(string s, int a) {
        name = s;
        age = a;
    }
};

class Student : public Person {
public:
    int rollno;

    Student() {cout <<"child\n";}
    ~Student(){cout<<"child deleted\n";}
   
    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

int main() {
    // Create a Student object
    Student s1;

    // Assign values later
    s1.name = "Mohan";
    s1.age = 21;
    s1.rollno = 23;

    // Display student details
    cout << "Student Details:" << endl;
    s1.getInfo();

    return 0;
}
