#include <iostream>
#include <stdlib.h>
using namespace std;
void PrintArr(int A[], const int sz)
{
    for(int i = 0; i < sz; i++)
        cout << A[i] << ", ";
}
int main() {
    cout << "Enter size of array: ";
    int sizeArr;
    cin >> sizeArr;
    int *Arr1 = new int[sizeArr];
    int *Arr2 = new int[sizeArr];
    //fill array
    srand(time(0));
    for(int i = 0; i < sizeArr; i++){
        Arr1[i] = rand()%100;
    }
    for(int i=0,j=sizeArr-1;i < sizeArr; i++,j--)//simple alg for reversing array
        Arr2[i] = Arr1[j] ;   // it can be: Arr2[j] = Arr1[i]
        cout << "original array\n";
    PrintArr(Arr1,sizeArr);
    cout << "\n\nReversed Array\n";
    PrintArr(Arr2,sizeArr);
    return 0;
}