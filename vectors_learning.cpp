#include<iostream>
#include<vector>
using namespace std;
// Vectors - inbuilt dynamic arrays
int main(){
    vector<int> a;
    a.push_back(10);
    a.push_back(78);
    a.push_back(34);
    a.push_back(45);

    // cout<<a[0]<<endl;     
    // we are going to use [] for two purposes: 1. to get 
                                            //  2. to update
    // do not use [] for inserting an element in the vector, because it will ultimately result in accessing a memory that was not intended.

    // we can use a.at(index) to get the element and it is much safer than square brackets.

    for (int i = 0; i < a.size(); i++)
    {
        cout<<a.at(i)<<endl;
    }
    
    a.pop_back(); // this is used to delete an element from the end of the array.
    
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a.at(i)<<endl;
    }

    a.capacity(); // this method tells use the current capacity of the underlying array, it DOUBLES every time when there is insuficient size for the elements for inserting in the array.

    cout<<"cap: "<<a.capacity()<<endl;

    cout<<"\n\n";
    vector<int>* vecpt=new vector<int>;   // this is for allocating memory dynamically in the heap.
    cout<<"cap: "<<vecpt->capacity()<<endl;
    cout<<"size: "<<vecpt->size()<<endl;
    vecpt->push_back(77);
    cout<<"cap: "<<vecpt->capacity()<<endl;
    cout<<"size: "<<vecpt->size()<<endl;
    cout<<vecpt->at(0)<<endl;

    vector<int>& nums=a;

    vector<int> tnum=nums;
    return 0;
}