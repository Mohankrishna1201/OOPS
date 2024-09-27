#include<bits/stdc++.h>
using namespace std;

class Print{
public:
void show(int x){
    cout<<x;
}
void show(char x){
    cout<<x;
}
};

int main(){

Print p;
// behaving as 1st constructor
p.show(1);
cout<<endl;
// behaving as 2nd constructor
p.show('q');

    return 0;
}

// here we are nowing during compiling like acc to argument type we can say 
// its changing behaviour


// some  types ->function overloading and operator Overloading