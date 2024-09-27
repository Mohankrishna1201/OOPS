#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : virtual public Person {
public:
    int roll;
};

class GradStudent : public Student {
public:
    string research;
};

class Teacher : virtual public Person {
public:
    string subject;
    int salary;
};

class TA : public Student, public Teacher {
    // TA class inherits both from Student and Teacher
};

int main() {
    TA s1;

    // Accessing members from the base class 'Person' and derived classes
    s1.name = "tn";
    s1.roll = 37;
    s1.age = 21;
    s1.subject = "IT";
    s1.salary = 10000;

    // Displaying the values
    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll: " << s1.roll << endl;
    cout << "Subject: " << s1.subject << endl;
    cout << "Salary: " << s1.salary << endl;

    return 0;
}
