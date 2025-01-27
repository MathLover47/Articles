#include<stdlib.h>
#include<time.h>
#include <chrono>
using namespace std::chrono;
#include <iostream>
using namespace std;

const int N = 10000;

void PrintArray(int arr[])
{
    cout << "\n\n";
    for (int i = 0; i < N; i++) {
        cout << arr[i]<< ", ";
        if ((i+1)%10== 0 )
            cout << endl;
    }

}
int FindMinMax(int &IndexMin, int &IndexMax,const int beginner, const int last,int arr[N])
{
     IndexMax = last;
     IndexMin = beginner;
    int max = arr[last];
    int min = arr[beginner];
    for (int i = beginner+1; i < last; i++)
        if (arr[i] > max) {
            max = arr[i];
            IndexMax = i;
        }
        else if(arr[i] < min){
            min = arr[i];
           IndexMin = i;

        }
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
        arr[i] = rand();
    }
    PrintArray(arr);
    auto start = high_resolution_clock::now();
    int minIndex, maxIndex;
    for(int j=0, i = N-1 ; i > j ; i--,j++) {
        FindMinMax(minIndex,maxIndex,j,i,arr);
        swap(arr[j], arr[minIndex]);
    swap(arr[i],arr[maxIndex]);

    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    cout << endl << "duration of algorithm in microseconds is = " << duration.count() << endl;
    cout << "\n\n" << "*************Printing Ascending Array**************";
    PrintArray(arr);
    return 0;


}
