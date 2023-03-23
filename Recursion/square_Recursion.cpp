#include <iostream>
using namespace std;

int pow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (x * pow(x, n - 1));
    }
}

// int main()
// {
//     int x, n;
//     cout << "Enter the number- ";
//     cin >> x;
//     cout << "Enter the power for the number- ";
//     cin >> n;
//     cout << "Result: " << pow(x, n) << endl;
//     return 0;
// }

// This is for printing sum of n natural numbers using recursion.

// int num(int n){
//     if(n==0){
//         return 0;
//     }
//     return n+num(n-1);
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int res=num(n);
//     cout<<"Sum of first 5 natural number is: "<<res<<endl;
//     return 0;
// }
int printnum(int n,int a=1){
    if (a>n)
    {
        return 0;
    }
    cout<<a<<endl;
    printnum(n, a+1);
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter the number upto which you want to print: ";
    cin>>n;
    int c=printnum(n);
    return 0;
}