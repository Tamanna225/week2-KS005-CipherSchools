#include <iostream>

using namespace std;

/*
We can also give parameters in function header with their types
when we do not want to return a value we declare return type as void
return indicates end of function
every function can return 1 value but can have multiple return statemens
*/

 void printstuff()  //declaring and defining printstuff function
 {
    cout<<"Writing my first function";
 }

int sum(int a, int b){
    int c;
    c = a+b;
    return c;
}

int main(){
    //printstuff();   // Calling function printstuff
    int a,b;
    int add_sum;
    a = 3;
    b = 5;
    add_sum = sum(a,b);
    cout<<add_sum;
    return 0;
}