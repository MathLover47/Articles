// printing 2d and 1d array by recursive function without any loop. and compare it to loop usage
#include <iostream>
#define d2 14
using namespace std;
void Print1dArray(const int Arr1[], const int size, int index = 0){
if (index == size)
cout << "\n";
else {
cout << Arr1[index] << ", ";
Print1dArray(Arr1, size, ++index);}
}
void Print2dArray(const int Arr2[][d2], const int d1, const int d21, int r = 0, int c = 0) {
if (c > d21-1) {
c = 0;
r++;
cout << "\n\n\n";}
if (r > d1 - 1) ;
else{
cout << Arr2[r][c] << ", ";
Print2dArray(Arr2, d1, d21, r, ++c);}}
int main()
{
const int s = 14, d1 = 10;
int Arr1[s], Arr2[d1][d2];
for (int i = 0; i < s; i++)
Arr1[i] = rand() % s + 1;
Print1dArray(Arr1, s);
for (int i = 0; i < d1; i++) {
cout << "\n";
for (int j = 0; j < d2; j++) {
Arr2[i][j] = rand() % (i + 1) + rand() % (j + 1);
cout << Arr2[i][j] << ", ";
}
}
cout << endl << endl;
Print2dArray(Arr2, d1, d2);
}