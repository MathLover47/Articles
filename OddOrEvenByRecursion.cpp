#include<iostream>
using namespace std;
void even(int);
void odd(int n)
{ cout << " n = " << n << " odd" << endl;
even(n+1);
}
void even(int n)
{
if (n >= 100);
else {
cout << " n = " << n << " even" << endl;
odd(n+1);
}
}
int main()
{
cout << "Number Status\n";
odd(1);// can be even(0);
//you can begin by any odd calling odd(n)
// you can begin by any even calling even(n)
return 0;
}