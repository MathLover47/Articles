/*
if only pointer to static array it can modify outside scope of function, here dynamic created inside function has function scope. local dynamic then really returned, and can be modified for this reason.
*/
/*
return array really not pointer to static array, using local dynamic scope.
*/
#include <iostream
using namespace std;
int *ReturnArray(int begin,int step,int size){
    int *Arr = new int[size];
    int element = begin;
    for(int i= 0; i < size; i++){
        Arr[i] = element;
        element += step;}
    return &Arr[0];}
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++)
        cout << arr[i] << ",";
    cout << endl;}
void ModifyArray(int add, int multiple,int Arr[], int size){
    for (int i = 0; i < size; i++)
        Arr[i] = add + Arr[i] * multiple;}
        int main() {
    int *Ar ;
    int size, beginner, step;
    cout << "size of array = ";
    cin >> size;
    cout << "beginner = ";
    cin >> beginner;
    cout << "step =";
    cin >> step;
    Ar = ReturnArray(beginner,step,size);
    printArray(Ar,size);
    int add, multiple;
    cout << "to be added to each element add=" ;
    cin >> add;
    cout << "multiply array by ";
    cin >> multiple;
    ModifyArray(add,multiple,Ar,size);
    printArray(Ar,size);
    return 0;}