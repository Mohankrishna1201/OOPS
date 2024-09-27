#include<bits/stdc++.h>
using namespace std;

class Teacher {
private:
int age;
public:
    Teacher(){
        cout<<"hi I am constructor";
        cout<<endl;
        dept = "cse";
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
    ~Teacher(){
        cout<<endl;
        cout<<"I am destructor and invoked at end of main function";
    }
};

int main(){

Teacher t1;
t1.name = "moh";
t1.subject ="maths";

t1.salary =100000000;

 cout<<t1.name<<endl;
// 

 cout<<t1.dept;
// cout<<t1.age; private variable can't access
 t1.setAge(12);
 cout<<t1.getAge();

    return 0;
}