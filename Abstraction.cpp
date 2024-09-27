#include<bits/stdc++.h>
using namespace std;

class Shape{
    virtual void draw() =0;

};
// any class with virtual keyword becomes abstract

class Circle : public Shape{
public:
    void draw(){
        cout<<"drawing circle";
    }
}
;
int main(){


Circle c1;
c1.draw();

    return 0;
}