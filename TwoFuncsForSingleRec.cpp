#include<iostream>
using namespace std;
void fact1(long *,long * );
void fact2(long *, long *);
int main()
{
 long *n,*fac;
 long nn = 0;
 long facfac = 1;
 n = &nn;
 fac = &facfac;
 cout << "n = ";
 cin >> nn;
 long numb = nn;
 fact2(n,fac);// it can be fact1(n,fac);
 cout << numb << "! = " << facfac << endl;
 return 0;
}
void fact1(long *n,long *fac){
    if(*n > 1){
            *fac *= *n;
            *n = *n-1;
      fact2(n, fac);}
}
void fact2(long *n, long *fac){
 if(*n > 1){
            *fac *= *n;
            *n = *n-1;
      fact1(n, fac);}
}
