#include<iostream> // this program illustrates recursion 
// of 3 functions in optimal state. by MathLover
using namespace std;
void Multiple5(int i= 3, int = 5, int = 7);
void Multiple7(int = 3, int = 5, int = 7);
void Multiple3(int i3 = 3, int i5 = 5, int i7 = 7){
cout << "y x 3 = " << i3 << ", ";
if (i3 > 300);
else {
Multiple5(i3 + 3, i5, i7);
} }
void Multiple5(int i3 , int i5 , int i7 ){
cout << "y x 5 = " << i5 << ", ";
Multiple7(i3, i5 + 5, i7);}
void Multiple7(int i3 , int i5 , int i7 ){
cout << "y x 7 = " << i7 << endl;
Multiple3(i3, i5 , i7+7);}

int main()
{
Multiple3(); // you can start by this one
cout << "\n\n";
Multiple5(); // or by this one
cout << "\n\n\n";
Multiple7(); // or by this one
return 0;
}