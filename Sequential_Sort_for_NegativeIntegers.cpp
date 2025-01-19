//this algorithm using sequential sort for negative integers
#include <chrono>
using namespace std::chrono;
#include <iostream>
using namespace std;
int* GenerateArray(int S)
{
    srand(time(0));
    int* a = new int[S];
    for (int i = 0; i < S; i++)
        a[i] = -(rand() % 100);
    return &a[0];
}
void PrintArray1d(int Array[], const int size) {
    for (int i = 0; i < size; i++) {
        if (i % 16 == 0)
            cout << endl;
        cout << Array[i] << " , ";
    }
}
int FindMin(int arr[], const int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min )
            min = arr[i];
    return min;

}
const int N = 365;
int main() {
    int* Plain = GenerateArray(N);
    PrintArray1d(Plain, N);
    auto start = high_resolution_clock::now();
    int min = FindMin(Plain, N);
    int* Images = new int[-min + 1];
    for (int j = 0; j <= -min; j++)
        Images[j] = { 0 };
    for (int i = 0; i < N; i++)
        ++Images[-Plain[i]];
    int* Asc = new int[N];
    int* Des = new int[N];
    int k = 0;
    for (int j = 0; j <= -min; j++) {
        while (Images[j] > 0) {
            Des[k] = -j;
            Asc[N - 1 - k] = -j;
            Images[j]--;
            k++;
        }
    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout << endl << "duration of algorithm in milliseconds is = " << duration.count() << endl;
    cout << "\n\n" << "*************Printing Ascending Array**************";
    PrintArray1d(Asc, N);
    cout << "\n\n" << "*************Printing Descending Array**************";
    PrintArray1d(Des, N);


}