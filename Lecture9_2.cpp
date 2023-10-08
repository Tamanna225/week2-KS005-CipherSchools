#include <iostream>

using namespace std;

/*
Parameters while defining and calling should be in same order and same number
*/

int sum(int a, int b);  // Function declaration
//int sum(int, int);    // This is prototype of function

int main(){
    
    int a,b;
    int c;
    a = 3;
    b = 5;

    // Value of a and b before calling sum
    cout<<a<<" "<<b<<endl;

    c = sum(a,b);   // values are being copied not transfered ang here a and b are actual arguments
    // int sum(int a, int b)    // int a ---> a, int b ---> b

    cout<<c<<endl;

    // Value of a and b after calling sum
    cout<<a<<" "<<b<<endl;
 
    
    return 0;
}


// Function defination
int sum(int a, int b)   //  Here a and b are formal parameters
{
    int c;
    c = a+b;
    a = 10;
    b = 11;
    return c;
}