#include<iostream>
using namespace std;
void Fac01(long &, long &);
void Fac02(long &, long &);
int main()
{
long n1,n2, f=1;
    cout << "n = ";
    cin >> n1;
    n2 = n1;
    Fac01(n1,f);
    cout << n2 << "! = " << f <<endl;
    return 0;
}
void Fac01(long &n, long &fac){
    if(n > 0){
    fac *= n;
    n--;
    Fac02(n,fac);}}
void Fac02(long &n, long &fac){
    if(n > 0){
    fac *= n;
    n--;
    Fac01(n,fac);}}
