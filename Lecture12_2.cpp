#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    int c;

    int *p, *q; // * IS VALUE AT OPERATOR or indirection operator
    
    p = &a;
    q = &b;
    
    a = 2;  // *p will change with a
    b = 5;
    
    c = *p+*q;

    // can we do this
    //p+1;
    //q+2;
    
    //*p = 3; // a will change with *p
    //cout<<"The value of a is (from te actual variable type) "<<a<<endl;
    //cout<<"The value of a is from the pointer using *(astereix / indirection operator) "<<*p<<endl;
    //b = *p; //stores ame value as a

    cout<<"The value of c is: "<<c<<endl;

    cout<<"The address of a is "<<&a<<" The value of pointer is "<<p<<endl;

    return 0;
}