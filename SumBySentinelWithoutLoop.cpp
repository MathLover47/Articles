In Programming Theory there's a theorem:
Everything is implemented by loops if and only if implemented by recursion.
so fib, factorial, ..............etc. implemented by both.
in this article i will implement sum by sentinel value same as while loop
and sum of array by using void, and return type function recursively.
////////////////////////////////////////////////////////////////////////////////
#include <iostream>
void FindSumWithSentinelValue(double sum = 0){
double value;
std::cout << " Enter Value(-99 to end) = ";
std::cin >> value;
if (value == -99)
std::cout << " sum = " << sum << std::endl;
else{
sum += value;
FindSumWithSentinelValue(sum);
}
}
double FindSumOfArray(const double Arr[],const int size, double sum = 0, int index =0){
if (index == size)
return sum;
else{
sum += Arr[index];
index++;
return FindSumOfArray(Arr, size, sum, index);
}
}
int main(){
FindSumWithSentinelValue();
const int size = 8;
double Arr[size];
for (int i = 0; i < size; i++)
Arr[i] = i ;
double sum = FindSumOfArray(Arr, size);
std::cout << "sum = " << sum;
}
