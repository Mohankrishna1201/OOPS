#include<bits/stdc++.h>
using namespace std;

class Student{

public:
string name;
double cgpa;

// customized constructor
Student(string s,double c){
    this->name =s;
    this->cgpa = c;
}
Student(Student &obj){
    this->name = obj.name;
   
    cgpa = obj.cgpa;
}
void getInfo(){
    cout<<"name :"<< name<<endl;
    cout<<"cgpa :" <<cgpa<<endl;
}
};

class newStudent {
public:
string name;
double *cgpa;
newStudent(string s,double c){
    this->name =s;
    cgpa = new double;
    *cgpa =c;
}

newStudent(newStudent &obj){
    this->name = obj.name;
    cgpa = new double;
    *cgpa = *obj.cgpa;
}
void getInfo(){
    cout<<"name :"<< name<<endl;
    cout<<"cgpa :" <<*cgpa<<endl;
}
};
int main(){

Student s1("Mohan",9.8);

s1.getInfo();
Student s2("Rahul",8.8);
s2.getInfo();
s1.getInfo();

    return 0;
}

// all are working perfect

// now use dyanamic variables like pointers
// like newStudent
// here we changed pointer value of s4.cgpa but even s3 values also changed
// this condn is known as shallow copy where 


// custom deepCopy Constructor