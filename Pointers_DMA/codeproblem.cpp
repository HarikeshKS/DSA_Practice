#include<iostream>
using namespace std;

// Understanding the concept of pointers and arrays.
// int main(){
//     int a[6]={1,2,3};
//     cout<<(a)<<endl;
//     cout<<*(a+2)<<endl;
//     int ab=12;
//     int* ptr = &ab;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     return 0;
// }

// Understanding the concept of string pointers and integer pointers.

// int main(){
//     char a[]="harikesh";
//     char* ptr=a;
//     cout<<a[0]<<" "<<ptr[0]<<endl;
//     cout<<ptr<<endl;
//     cout<<a<<endl;
//     cout<<*ptr<<endl;
//     cout<<*a<<endl;
//     cout<<&a<<endl;
//     cout<<&ptr<<endl;
//     return 0;
// }

// An interseting question !
// What will be the output of this code?
// int main(){
//     char a[]="abc";
//     char* ptr=&a[0];
//     ptr++;
//     cout<<ptr<<endl;     //this will print bc as the output
//     cout<<*ptr<<endl;     //this will print only b as the output
//     return 0;
//     // ptr[0] is same as *(ptr+0)
//     // ptr[4] is same as *(ptr+3)

//     // that is why arrays can be used as pointers.

//     // when arrays are passed to a function, it is passed as a pointer only!!!
//     // and we can pass part of an array like - a+3, as 'a' represents the address of the first element of the array.
// }

// An example how the variables are affected by the used of pointers with proper dereferncing.
// void square(int *p){
//  *p = (*p) * (*p);
// }

// int main(){
//  int a = 10;
//  square(&a);
//  cout << a << endl;
// }


// Concept of double pointers.
// double pointers are used to store the address of other pointers.

// void incrementadd(int** nptr){
//     nptr=nptr+1;
// }
// void increment(int** nptr){
//     *nptr=*nptr+1;
// }

// void incrementdoub(int** nptr){
//     **nptr=**nptr+1;
// }
// int main(){
//     int num=10;
//     int* ptr=&num;
//     int** ptrdb=&ptr;
//     cout<<num<<endl;
//     cout<<*ptr<<endl;
//     cout<<**ptrdb<<endl;
//     // increment(ptrdb);
//     incrementdoub(ptrdb);
//     cout<<num<<endl;
//     cout<<*ptr<<endl;
//     cout<<**ptrdb<<endl;

//     return 0;

// }

// little endian ---- big endian
// Address typecasting:->
// pointers needs to be typecasted explicitly, as the type of pointer changes the functionallity of it also changes with the particular datatype.

// Reference Variables.
// refering a variable using another variable. -- that means the variable created will be just the reference to the memory of the original variable. 
// we need to tell that which memeory has to be used by the reference variable, at the time of its declaration. 

int main(int argc, char const *argv[])
{
    int a=10;
    int& b=a;     //this is the reference variable!
    // both the variables here are carrying the same memory address but "b" is acting as the reference to the variable "a".
    // the changes made in any of the variable will be refelected on the other also.
    // it is just like a person having two names.
    a++;
    cout<<a<<endl;
    cout<<b<<endl;

    // this is a nice thing to know!!
    // the declaration of the reference variable needs to be initialized, that means, we cannot first declare and then assign the value to it, like we do it in the declaration of the other kind of variables.

    // reference variables are useful in functions.
// it is bad practice to return reference or even pointers from any function, as the memory does not belong to the whole program that was assigned to the function. because the variable will be local variable, not having scope outside the function.

    return 0;
}
