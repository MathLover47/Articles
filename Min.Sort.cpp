#include<stdlib.h>
#include<time.h>
#include <chrono>
using namespace std::chrono;
#include <iostream>
using namespace std;

const int N = 10;

void PrintArray(int arr[])
{
    cout << "\n\n";
    for (int i = 0; i < N; i++) {
        cout << arr[i]<< ", ";
        if ((i+1)%10== 0 )
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
    int arr[N] =  {0};
    srand(time(0));
    for(int i = 0; i < N; i++){
        arr[i] = rand()%100;
    }
    PrintArray(arr);
    auto start = high_resolution_clock::now();
    for(int i = 0; i < N-1;i++) {
        int j = FindMin(arr, i);
        swap(arr[i], arr[j]);

    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout << endl << "duration of algorithm in milliseconds is = " << duration.count() << endl;
    cout << "\n\n" << "*************Printing Ascending Array**************";
    PrintArray(arr);
    return 0;


}
