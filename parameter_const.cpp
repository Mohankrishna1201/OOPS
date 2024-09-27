#include<bits/stdc++.h>
using namespace std;

class Teacher {
private:
int age;
public:
    Teacher(string s, string d, string l, double sal){
         name = s;
         dept =d;
         subject =l;
         salary = sal;
       
    }
    string name;
    string dept;
    string subject;
    double salary;


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

cout<<t1.name;


    return 0;
}