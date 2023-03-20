#include<iostream>
using namespace std;

int main(){
    int n=10;
    int m=12;
    // *******IMP*******
    int const * p =&n;   //this statement means that, p is a pointer pointing to a constant integer.
    p=&m; // this is valid here!! --> because the pointer is constant for pointing onto an integer but the pointer itself is not constant. 
    cout<<*p<<endl; 

    // a normal pointer cannot be created for a constant integer.

    // const keyword just promises to read-only the values!!, and the access of the variable must satisfy accordingly.
    int const h=10;
    int const * ptr=&h;  //this becomes a read-only pointer,i.e., constant pointer.

    cout<<*ptr<<endl;

    // NEW SYNTAX and the meaning also changes-
    int b=97;
    int a=44;
    
    
    // *******IMP*******
    int * const npt = &b;  //this statement means that, npt is a constant pointer to a integer.
    (*npt)++; // this is valid here!!, but not in the other syntax stated above.
    // npt=&a; --> this statement will give error here, because we are trying to change a constant thing.


    int const * const p3=&h; // this statement means that, p3 is a constant pointer to a constant integer.😂😂
    // here we cannot change any of the p3 as well as the *p3.

    return 0;
} 