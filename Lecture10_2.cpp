#include <iostream>

using namespace std;

//void swap(int a, int b) // passing parameters by value
void swap(int &a, int &b)   // passing parameters by refrence
{
    int c;
    c = a;
    a = b;
    b = c;
    cout<<"The values of a and b after swapping inside the function are: "<<a<<" "<<b<<endl;
}

void fun(int &a, int b)   // passing parameter a by refrence and b by value
{
    a = 99999;
    b = 99999;
    cout<<"The values of a and b after passing inside the fun function inside fun are: "<<a<<" "<<b<<endl;
}

int main(){
    int a, b;
    a = 4;
    b = 6;
    cout<<"The values of a and b before passing inside the fun function are: "<<a<<" "<<b<<endl;
    fun(a,b);
    cout<<"The values of a and b after passing inside the fun function are: "<<a<<" "<<b<<endl;

    //swap(a,b);  
    //Here values of a and b are not swapped outside because a and b are copied into local a and b of function so actual a and b are not changed
    // But now we are using pass by refrence where we have used & to actually specify the address where a and b are stored so it can be modified
    //cout<<"The values of a and b after swapping outside the function are: "<<a<<" "<<b<<endl;
    return 0;
}