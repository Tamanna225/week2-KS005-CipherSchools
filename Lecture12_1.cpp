#include <iostream>

using namespace std;

int main(){
    //Every element have an address and that address can be used to find the exact element
    // Address of an element is stored in the address
    //Every pointer has a type and it will depend on what type of varible address we are storing
    int a;
    float b;
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<&b<<endl;

    //Every data item has a memory and a type


    int *p; // * IS VALUE AT OPERATOR
    p = &a;


    return 0;
}