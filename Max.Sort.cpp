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
int FindMax(int arr[], const int last)
{
    int index = last;
    int max = arr[last];
    for (int i = 0; i < last; i++)
        if (arr[i] > max) {
            max = arr[i];
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
    for(int i = N-1 ; i > 0; i--) {
        int j = FindMax(arr, i);
        swap(arr[i], arr[j]);

    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout << endl << "duration of algorithm in milliseconds is = " << duration.count() << endl;
    cout << "\n\n" << "*************Printing Ascending Array**************";
    PrintArray(arr);
    return 0;


}
