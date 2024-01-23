#include <stdlib.h>
#include <time.h>
using namespace std;
void WithShiftOne(int [],int);
// this program for digesting multi function recursion
// also for introducing my algorithm shift-One-Sorting algorithm
void WithoutShiftOne(int Array[], int size)
{
    bool sorted = true;
    for(int i = 0; i < size-1; i += 2)
        if(Array[i] > Array[i+1])
        {
            sorted = false;
            int temp = Array[i];
            Array[i] = Array[i+1];
            Array[i+1] = temp;
        }
    if(sorted) return;
    else WithShiftOne(Array,size);
}
void WithShiftOne(int Array[], int size)
{
    bool sorted = true;
    for(int i = 1; i < size-1; i += 2)
        if(Array[i] > Array[i+1])
        {
            sorted = false;
            int temp = Array[i];
            Array[i] = Array[i+1];
            Array[i+1] = temp;
        }
    if(sorted) return;
    else WithoutShiftOne(Array,size);
}
void printArray(int Array[], int size)
{
    for(int i = 0; i < size; i++)
        cout << Array[i] << ",";
    cout << endl << endl;
}
int main() {
    srand(time(0));
    int size;
    cout << "Enter size of Array = ";
    cin >> size;
    int *Array = new int[size];
    for(int i = 0; i < size; i++)
        Array[i] = rand()%147;
    printArray(Array,size);
    WithoutShiftOne(Array,size);
    // it can be started with WithShiftONe(Array,size): instead of  WithoutShiftOne(Array,size);
    // it can be started with any function of recursion.
    printArray(Array,size);
    return 0;
}
>