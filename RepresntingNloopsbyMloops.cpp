In programming theory "representing m loops by n loops"
this time implementing 2d loop as 1d loop of 2d array.
enjoy it.
#include <iostream>
using namespace std;
const int m = 10;
const int n = 12;
void Print2dArray(int a[m][n], const int s, const int t)
{
  for (int i = 0; i < s; i++)
{
cout << endl;
for (int j = 0; j < t; j++)
cout << a[i][j] << " , ";
}
}
int main()
{
int i, j, x, y;
  int Arr1[m][n] = { 0 };
int Arr2[m ][n] = { 0 };
for (i = 0; i < m; i++)
for (j = 0; j < n; j++)
Arr1[i][j] = i * j;
Print2dArray(Arr1, m, n);
int s = m*n ;
for (i = 0; i < s ; i++)
{
//each row cotains n elements so divide it by n to know the number of row.
x = (int)(i / n) ;
// in each row from 0 to n - 1 it is the remainder of division of i / n is column.
y = (i % n) ;
Arr2[x][y] = x * y;
   }
cout << "\n\n\n\n";
Print2dArray(Arr2, m, n);
cin.get();
return 0;
}