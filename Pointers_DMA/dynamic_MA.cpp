#include <iostream>
using namespace std;
// this is about dynamic memory allocation -- heap memory is used here, as it runs on the runtime.
// Heap it not like stack, stack is a static memory and runs the compile time.
// In stack memory there is a name for the memory allocated.
int main()
{
    // new keyword is used for the DMA, this keyword just contains the memory address allocated to the particular datatype we want to make variable of...

    int *p = new int; // this statement contains the address and by using dereferencing we can assign some value at that particular memory location.

    *p = 10; // assigning some value the that memory loaction.
    cout << *p << endl;

    // DMA is useful in assigning size to an array.
    int *pa = new int[20];  // this statement takes 80bytes (20*4) (for the integer array) in the heap and 8 bytes in stack (for the pointer).
    int n;
    cout << "enter the size of the array- ";
    cin >> n;
    int *parr = new int[n];

    // now this pointer can be definitely used in a similar way as an array, as we have seen earlier also.

    parr[0] = 19;

    for (int i = 0; i < n; i++)
    {
        cin >> parr[i];
    }

    // to print the array:
    for (int i = 0; i < n; i++)
    {
        cout << parr[i] << "  ";
        // this parr[i] means that, *(parr+i)
    }

    // to find the maximum number in the array:
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (max < parr[i])
        {
            max = parr[i];
        }
    }
    cout << "\n"
         << max << endl;

// dynamically allocated memory does not get destroyed or wipe of by the scope, but in stack as soon as the scope ends the memory is deallocated.


// static memory auto releases the memory on the basis of the scope of the variables.
// dynamic memory requires manual release of the memory.

// delete keyword is used to release the memory from the particular address.
    delete p; // for single element.
    // the pointer is not deleted, the interger that this pointer was pointing to, was deleted; that means that we can evena use this pointer for any other integer values (here integer specifically).

    delete [] parr; // for array deletion
    return 0;
}