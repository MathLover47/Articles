//creating 2d array dynamically for both rows and columns
// return 2d array from function
#include <iostream>
using namespace std;
int **Create2dArray(const int m, const int n)
{
  int **Arr = new int*[m]; // array of pointers
  for(int i = 0; i < m; i++ )
  {
    Arr[i] = new int[n];
    for(int j = 0; j < n; j++)
      Arr[i][j] = i + j;
  }
  return &Arr[0];
}
int main() {
  int m,n;
  cout << "enter rows = ";
  cin >> m;
  cout << "enter columns = ";
  cin >> n;
  int **a = Create2dArray(m,n);
  for(int i = 0; i < m; i++)
  {
    cout << endl;
    for(int j=0; j < n ; j++)
      cout << "Arr[" << i << "][" << j << "]= " << a[i][j] << "\t";
  }
  return 0;
}