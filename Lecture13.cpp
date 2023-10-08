#include <iostream>

using namespace std;

/*
SCALE FACTOR

DEREFRENCED POINTER *d+1


*/



int main(){
    /*
    int a = 5;
    int *x;
    x = &a;

    // The value of pointer is incremented by 4 because it is an integer pointer and integer take space of 4 bytes

    cout<<"The address of a, which is stored in the pointer x is: "<<x<<" and the value of x+1 is "<<x+1<<endl;
    cout<<x+2;  // Now x is incremented by 8
    */
    int a[5];
    int *x;

    x = &a[0];

    int i;
    for(i = 0; i<6;i++){
        //Array store elements in contiguous memory location
        cout<<&a[i]<<endl;  //print address where elemnts of array is stored
    }

    return 0;
}