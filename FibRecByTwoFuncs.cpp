#include<iostream>
using namespace std;
void Fib01(long &n,unsigned long a[],const int length);
void Fib02(long &n, unsigned long a[],const int length);
int main(){
long n;
    cout << "Enter length of array(>2)  of fibonacci sequence n = ";
    cin >> n;
    unsigned long *arr = new unsigned long[n];
    arr[0] = arr[1] = 1;
    long n1 = 2;
    Fib01(n1,arr,n);
    for(int i = 0; i < n; i++)
        cout << arr[i] << ", ";
    cout << endl;
    return 0;}
void Fib01(long &n,unsigned long a[],const int length){
    if(n < length && n > 1){
    a[n] = a[n-1]+ a[n-2];
    n++;
    Fib02(n,a,length);}}
void Fib02(long &n, unsigned long a[],const int length){
    if(n < length && n > 1){
    a[n] = a[n-1]+ a[n-2];
    n++;
    Fib01(n,a,length);}}
