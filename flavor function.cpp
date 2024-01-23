/*variable shift, recommended size of array by 10, shift = size/10 to make it accelerated for a very big size test speed of variable shift, solve the problem in the program, hoping you succeeding.*/
/*Flavor function variable shift for shif1t1 sorting algorithm*/
#include <stdlib.h>
#include <time.h>
using namespace std;
void WithShiftOne(int [],int,int ,int);
void ShiftBy( int ,const int , int *Array,const int );
void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;}
int* GenerateRandArray(const int size, const int max)
{int *Array = new int[size];
    for(int i = 0; i < size; i++)
        Array[i] = rand()%max;
    return &Array[0];
}
// this program for introducing variable shift function
// applicable on shift one sort, try implement for descending
// and let the other function call ShiftBy and let ShiftBy
// calls the other function.
void WithoutShiftOne(int Array[], int size,int start,int shift)
{
    bool sorted = true;
    for(int i = 0; i < size-1; i += 2)
        if(Array[i] > Array[i+1])
        {
            sorted = false;
            swap(Array[i], Array[i+1]);
        }
    if(sorted) return;
    else WithShiftOne(Array,size,start,shift);
}
void WithShiftOne(int Array[], int size,int start,const int shift)
{
    bool sorted = true;
    for(int i = 1; i < size-1; i += 2)
        if(Array[i] > Array[i+1])
        {
            sorted = false;
            swap(Array[i], Array[i+1]);
        }
    if(sorted) return;
    else ShiftBy(start,shift,Array,size);
}
void ShiftBy( int start,const int shift, int *Array,const int size)
{
    if( start < shift) {
        for (int i = start; i < size - shift; i += shift) {
            if (Array[i] > Array[i + shift]) {
                swap(Array[i], Array[i + shift]);
            }
        }
        WithoutShiftOne(Array,size,start,shift);
    }
    else ShiftBy(++start,shift,Array,size);
}
void printArray(int Array[], int size)
{
    for(int i = 0; i < size; i++)
        cout << Array[i] << ",";
    cout << endl << endl;
}
int main() {
    srand(time(0));
    int size,max,shift;
    cout << "Enter size of Array = ";
    cin >> size;
    cout << "Enter Max generated number";
    cin >> max;
    cout << "Enter shift for flavor shift function";
    cin >> shift;
    int *Array = GenerateRandArray(size,max);
    printArray(Array,size);
    WithoutShiftOne(Array,size,0,shift);
    // it can be started with WithShiftONe(Array,size): instead of  WithoutShiftOne(Array,size);
    // it can be started with any function of recursion.
    printArray(Array,size);
    return 0;
}