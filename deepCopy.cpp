#include<bits/stdc++.h>
using namespace std;

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


newStudent s3("newMohan",9.8);
s3.getInfo();

newStudent s4(s3);
*(s4.cgpa)=7.7;
s3.getInfo();
s4.name = "neha";
s4.getInfo();

    return 0;
}