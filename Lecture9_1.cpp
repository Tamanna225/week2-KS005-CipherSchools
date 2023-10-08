#include <iostream>

using namespace std;

/*
When a function returns a value it returns back to calling function
only one return value
Multiple return statements are allowed
*/

/*
//Compare function with one return statement
int compare(int a, int b)  //Header of function
{
    //This function take 2 integers as arguments and return the largest
    int c;
    if(a>b){
        c = a;
    }
    else{
        c = b;
    }
    // Now c will store the maximum of a and b

    return c;
}
*/


//Compare function with multiple return statements
int compare(int a, int b)  //Header of function
{
    //This function take 2 integers as arguments and return the largest
    
    if(a>b){
        return a;
    }
    else{
        return b;
    }
    
}


// Function to guess a number
int guess(int a){
    if(a == 5){
        return 1;
    }
    /*else{
        return 0;    // we can return 0 here or without else it does not matter 
    }*/
    return 0;
}

int sum(int a, int b){
    int c;
    c = a+b;
    return c;
}

int main(){
    int a,b;
    int add_sum;
    a = 3;
    b = 5;
    //cout<<compare(a,b);
    //cout<<guess(a)
    add_sum = sum(a,b);
    cout<<add_sum;
    return 0;
}