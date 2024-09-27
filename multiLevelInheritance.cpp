#include<bits/stdc++.h>
using namespace std;

class Person{

    public:
    string name;
    int age;


}; 

class Student :public Person{

    public:
    int roll;


};

class GradStudent : public Student{

    public:
    string research;
}
;
int main(){

GradStudent s1;
s1.research = "Coding";
s1.name = "tn";
s1.roll =37;
s1.age =21;

cout<<s1.name<<endl;
cout<<s1.age<<endl;
cout<<s1.research<<endl;
cout<<s1.roll<<endl;


    return 0;
}