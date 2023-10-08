#include <iostream>

using namespace std;

void PrintHi()  //  No parameters
{
    cout<<"Hi"<<endl;
    return;
}

int sum(int a, int b){
    int c;  // if we will not declare c here it will give error 
    c = a+b;
    a = 500;    //Will not beable to change the value of a in main function
    cout<<"The value of c in Sum is "<<c<<endl; // Here c will be 10 becuase we are printing in sum function because local value of c will be used here
    return c;
}

int main(){

    PrintHi();  //Calling function PrintHi

    int a,b;

    a = 4;
    b = 6;
    int d;
    int c;  //Without assigning it will give garbage value
    c = 75; // This value of c will be printed because other c is local to sum function
    d = sum(a,b);   // Calling sum function
    //cout<<"The sum is equal to "<<d<<" The value of a is: "<<a<<" The value of c is "<<c<<endl;
    cout<<"The value of c is "<<c<<endl;
    return 0;
}