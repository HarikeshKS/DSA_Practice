#include<iostream>
using namespace std;
// Recursion is directly the implementation of Principle of Mathematical Induction!
// In PMI, we had as base case 
//         and the induction hypothesis
//         and the induction statement final proof

int fib_rec(int n){
    if (n==0)
    {
        return 0;
    }
    if (n==1){
        return 1;
    }
    int smalloutput1=fib_rec(n-1);
    int smalloutput2=fib_rec(n-2);
    return smalloutput1+smalloutput2;
}

int main(){
    cout<<fib_rec(3)<<endl;
    return 0;
}