#include<iostream>
using namespace std;

inline int max(int a, int b){
    return (a>b)?a:b;
}

int sum(int a, int b, int c=0, int d=0){
    return a+b+c+d;
}

int main(){
    int a,b;
    cout<<"Enter first number- ";
    cin>>a;
    cout<<"Enter second number- ";
    cin>>b;

    int c=max(a,b);
    cout<<c<<" is greater."<<endl;

    int d=sum(a,b);
    cout<<d<<" is the sum of the given numbers!"<<endl;

    return 0;
}
