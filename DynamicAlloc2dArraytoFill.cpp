#include <iostream>
int main()
{
  std::cout << "Dynamically Allocating two dimensional array and fill it!\n";
int n, sum = 0;
const int m = 130; // modfiy this one as you want, you can use bigger than you want but initalize it with 0
std::cout << "second dimension = ";
std::cin >> n;
int* Arr1[m]; // Array of pointers which meanst Array of m pointers each one is column array
int* col = new int[n]; // column Array of n - columns for each row later in next loop
// (int*)Arr1;
for (int i = 0; i < m; i++)
{
Arr1[i] = &col[0]; // the address of first element is array itself; assigned to pointer of row
}
for(int i=0; i < m; i++)
for (int j = 0; j < n; j++)
{
Arr1[i][j] = rand() % 100;
sum++;
std::cout << Arr1[i][j] << ",";
if (j % m == 0)
std::cout << std::endl;
}
std::cout << " Numbers of elements are " << n * m << " which is printed " << sum << "\n\n";
std::cin.get();
return 0;
}