#include<iostream>
#include<cmath>
using namespace std;
int noOfDigits(int x){
    return (log10(x)+1);
}

int noOfDigitsrecur(int x){
    static int count=0;
    if(x>0){
        count++;
        noOfDigitsrecur(x/10);
    }
    else{
        return count;
    }
}

int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<"Number of Digits are: "<<noOfDigits(n);  // no recursion

    cout<<"\n(Recursion)Number of Digits are: "<<noOfDigitsrecur(n);  // with recursion

    return 0;
}