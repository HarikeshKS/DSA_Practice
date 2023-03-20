#include<iostream>
using namespace std;
// we will be using recursion when the solution of a problem depends on some other smaller problem of the same nature.
// we must have a decent understanding of call stack! for recursion.

// here I am trying to write a simple program to find the factorial of a number.

int factorial(int a){
    if(a==0){
        return 1;
    }
    int smalleroutput=factorial(a-1);
    return a*smalleroutput;
}
int main(){
    int n;
    cout<<"Enter number- ";
    cin>>n;

    int output;
    output=factorial(n);
    cout<<output<<endl;    
    return 0;
}

// Must see the dry run pdf in my local system(ANDROID).
