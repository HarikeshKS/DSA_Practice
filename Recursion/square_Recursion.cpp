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

int main()
{
    int x, n;
    cout << "Enter the number- ";
    cin >> x;
    cout << "Enter the power for the number- ";
    cin >> n;
    cout << "Result: " << pow(x, n) << endl;
    return 0;
}