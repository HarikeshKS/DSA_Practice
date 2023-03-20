#include<iostream>
using namespace std;

int main(){
    // constant int
    int const a=10;
    const int b=20; // both the syntax are valid.
    // the const keyword makes the variable constant, that is it cannot be changed in future.

    // constant reference from a non constant int.
    int i=10;
    int const &j=i;
    i++; // the change will be refelected to the 'j' variable also!!
    // The const keyword fixes the path to the storage not the storage!!!

    // non constant reference from a constant int.
    int const k=10;
    // int &l=k; // this will show error!!
    return 0;
}