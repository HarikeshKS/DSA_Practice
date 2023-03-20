#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"Enter number of rows - ";
    cin>>m;
    cout<<"Enter number of columns - ";
    cin>>n;
    int** tarr=new int*[m];
    for (int i = 0; i < m; i++)
    {
        tarr[i]=new int[n];
        cout<<"Enter elements for row "<<i+1<<"- "<<endl;
        for (int j = 0; j < n; j++)
        {
            cin>>tarr[i][j];
        }
    }
    cout<<"\nThe 2D array is:"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<tarr[i][j]<<" ";
        }
        cout<<"\n";
    }
    // how to free the memory of it.

    for (int i = 0; i < n; i++)
    {
        delete [] tarr[i];
    }
    delete [] tarr;
    

    return 0;
}