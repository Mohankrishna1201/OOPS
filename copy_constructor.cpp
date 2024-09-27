#include<bits/stdc++.h>
using namespace std;

class Teacher {
private:
int age;
public:
    string name;
    string dept;
    string subject;
    double salary;

Teacher(string s, string d, string l, double sal){
    this-> name = s;
    this->dept =d;
    this->subject =l;
    this->salary = sal;
    }

// custom copy constructor

Teacher(Teacher &obj){
    cout<<"Custom copy"<<endl;
    this->name = obj.name;
    this->dept = obj.dept;
}


    void changeDep(string newDept){
        dept = newDept;
    }

    void setAge(int a){
        age =a;
    }

    int getAge(){
        return age;
    }
};

int main(){

Teacher t1("Mohan","CSE","C++",100000);

// copies whole object and creates new
Teacher t2(t1);
// when called this default it calls default constructor
// if u define custom copy constructor it directly calls custom one
cout<<t2.name;
 

    return 0;
}

// These all are statically memory allocation
// also known as shallow copy

