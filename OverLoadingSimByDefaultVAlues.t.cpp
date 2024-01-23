include <iostream>
using namespace std;
int max(int x1=-999999,int x2=-999999,int x3=-999999,int x4=-999999,int x5=-999999,int x6=-999999,
		int x7=-999999,int x8=-999999,int x9=-999999,int x10=-999999,int x11=-999999,int x12=-999999)
{   int arr1[] = {x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12};
	int max1 = x1;
	for(int i =1; i < 12; i++)
		if (arr1[i] > max1)
			max1 = arr1[i];
	return max1;
}
double min(double x1=999999,double x2=999999,double x3=999999,double x4=999999,double x5=999999,double x6=999999,
		double x7=999999,double x8=999999,double x9=999999,double x10=999999,double x11=999999,double x12=999999)
{   double arr1[] = {x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11,x12};
	double min1 = x1;
	for(int i =1; i < 12; i++)
		if (arr1[i]< min1)
			min1 = arr1[i];
	return min1;
}
int main() {
	cout << "max(-99,-98,-44)=" << max(-99,-98,-44) << endl;
	cout << "min(3.4,4.02,6.32,7,8,3.1,3.001)=" << min(3.4,4.02,6.32,7,8,3.1,3.001) << endl;
	return 0;