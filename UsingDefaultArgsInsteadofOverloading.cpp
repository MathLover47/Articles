#include <iostream>
#include <math.h>
using namespace std;
long double subtract(double x1=0,double x2=0,double x3=0,double x4=0,double x5=0,double x6=0,double x7=0,double x8=0,double x9=0,double x10=0,
 double x11=0,double x12=0,double x13=0,double x14=0,double x15=0,double x16=0,double x17=0,double x18=0,double x19=0,double x20=0)
 {double arr1[] = {x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20};
 long double subtract1 = x1;
 for(int i =1; i < 20; i++)
 subtract1 -= arr1[i];
 return subtract1;}
long double division(double x1=1,double x2=1,double x3=1,double x4=1,double x5=1,double x6=1,double x7=1,double x8=1,double x9=1,double x10=1,
 double x11=1,double x12=1,double x13=1,double x14=1,double x15=1,double x16=1,double x17=1,double x18=1,double x19=1,double x20=1)
 {
 double arr1[] = {x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20};
 long double div1 = x1;
 for(int i =1; i < 20; i++)
 div1 /= arr1[i];
 return div1;
 };
long double product(double x1=1,double x2=1,double x3=1,double x4=1,double x5=1,double x6=1,double x7=1,double x8=1,double x9=1,double x10=1,
 double x11=1,double x12=1,double x13=1,double x14=1,double x15=1,double x16=1,double x17=1,double x18=1,double x19=1,double x20=1)
 {
 double arr1[] = {x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20};
 long double product1 = 1;
 for(int i =0; i < 20; i++)
 product1 *= arr1[i];
 return product1;
 };
long double power(double x1=1,double x2=1,double x3=1,double x4=1,double x5=1,double x6=1,double x7=1,double x8=1,double x9=1,double x10=1,
 double x11=1,double x12=1,double x13=1,double x14=1,double x15=1,double x16=1,double x17=1,double x18=1,double x19=1,double x20=1)
 {
 double arr1[] = {x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20};
 long double power1 = x1;
 for(int i =1; i < 20; i++)
 power1 = pow(power1,arr1[i]);
 return power1;
 };
long double sum(double x1=0,double x2=0,double x3=0,double x4=0,double x5=0,double x6=0,double x7=0,double x8=0,double x9=0,double x10=0,
 double x11=0,double x12=0,double x13=0,double x14=0,double x15=0,double x16=0,double x17=0,double x18=0,double x19=0,double x20=0)
 {double arr1[] = {x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12,x13,x14,x15,x16,x17,x18,x19,x20};
 long double sum1 = 0;
 for(int i =0; i < 20; i++)
 sum1 += arr1[i];
 return sum1;}
 int main(){
 cout << product(1,2,3) << endl << sum(1,4,6,0,-33,22,11,44) << endl<< power(2,2,2)<< endl << subtract(199,1,3,6,44,50)<< endl << division(3,4,2);
 return 0;}