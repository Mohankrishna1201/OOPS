#include<bits/stdc++.h>
using namespace std;

class Person{

    public:
    string name;
    int age;

    Person(string s,int a){
        this->name =s;
        this->age =a;
    }
}; 

class Student :public Person{

    public:
    int roll;

    Student(string s,int a,int r) : Person(s,a){
        this->roll = r;
    }

    void getInfo(){
        cout<<name<<endl;
        cout<<roll<<endl;
    }
};

int main(){

Student s1("Mohan",21,37);

s1.getInfo();


    return 0;
}