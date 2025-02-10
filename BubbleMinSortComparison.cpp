#include<stdlib.h>
#include<time.h>
#include <chrono>
using namespace std::chrono;
#include <iostream>
using namespace std;

const int N = 100000;
const int factor = 10000;

void PrintArray(int arr[])
{
    cout << "\n\n";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << ", ";
        if ((i + 1) % 10 == 0)
            cout << endl;
    }

}
int FindMin(int arr[], const int start)
{
    int index = start;
    int min = arr[start];
    for (int i = start + 1; i < N; i++)
        if (arr[i] < min) {
            min = arr[i];
            index = i;
        }
    return index;
}
void swap(double& x, double& y) {
    double temp = x;
    x = y;
    y = temp;
}

int main() {
    int* arr = new int[N];
    int* arr2 = new int[N];
    srand(time(0));
    for (int i = 0; i < N; i++) {
        arr[i] = rand() *factor;
        arr2[i] = arr[i];
    }
    //PrintArray(arr);
    auto start1 = high_resolution_clock::now();
    for (int i = 0; i < N - 1; i++) {
        int j = FindMin(arr, i);
        swap(arr[i], arr[j]);

    }
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(end1 - start1);
    cout << endl << "duration of algorithm Min.sort in milliseconds is = " << duration1.count() << endl;
   /* cout << "\n\n" << "*************Printing Ascending Array**************";
    PrintArray(arr);*/
    auto start2 = high_resolution_clock::now();
    for (int i = 0; i < N-1; i++)
    for(int j = 0; j < N-i-1; j++)
        if (arr2[j + 1] < arr2[j]) 
            swap(arr2[j+1], arr2[j]);
    auto end2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(end2 - start2);
    cout << endl << "duration of algorithm buble.sort in milliseconds is = " << duration2.count() << endl;
    //cout << "\n\n" << "*************Printing Ascending Array**************";
    //PrintArray(arr2);
    cout << "\n\ntry increase N, and multiply rand() by bigger number to compare more\n";
    cout << "\n\nMin.sort is quicker than bubble sort " << duration2.count() / duration1.count() << "  times" << endl;
    return 0;


}
