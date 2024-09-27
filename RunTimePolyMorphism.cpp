 #include<bits/stdc++.h>
using namespace std;

class Parent{
public:
void getInfo(){
    cout<<"Parent\n";
}
};

class Child :public Parent{
    public:
void getInfo(){
    cout<<"child\n";
}
}
;
int main(){

Parent p;
// behaving as 1st constructor
p.getInfo();
cout<<endl;
// behaving as 2nd constructor
Child p2;
p2.getInfo();

// so here p2 over riding p1
    return 0;
}

