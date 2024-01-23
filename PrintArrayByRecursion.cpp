#include <iostream>
#include <time.h>
using namespace std;
const int row = 10;
const int col = 10;
const int s = 10;
void Print1dArrByRec(int Arr1d[], const int len=s, int n=0){
  if(n < len){
  cout << Arr1d[n] << "; ";
    Print1dArrByRec(Arr1d,len,n+1);}}
void Print1dArrayRevByRec(int Arr1d[],int n = s-1){
  if( n >= 0){
    cout << Arr1d[n] << "; ";
    Print1dArrayRevByRec(Arr1d,n-1);}}
void Print2dArrByRec(int Arr2d[row][col],const int rows = row,const int cols = col,int rowIndex = 0,int colIndex = 0){
  if(colIndex >= cols)
  {
    colIndex = 0;
    rowIndex += 1;
    cout << endl;
  }
  if( rowIndex < rows){
    cout << Arr2d[rowIndex][colIndex] << "; ";
    Print2dArrByRec(Arr2d, rows, cols, rowIndex, ++colIndex);}}
void Print2dArrRevByRec(int Arr2d[row][col],const int rows=row,const int cols=col,int rowIndex=row-1,int colIndex=col-1){
  if(colIndex < 0)
  {
    colIndex = cols-1;
    rowIndex -= 1;
    cout << endl;
  }
  if( rowIndex >-1){
    cout << Arr2d[rowIndex][colIndex] << "; ";
    Print2dArrRevByRec(Arr2d, rows, cols, rowIndex, --colIndex);}}

void Generate1dArray(int Arr1d[], const int size =s){
  srand(time(0));
  int i =0;
  while(i < size){
    Arr1d[i] = rand()%100;
    i = i + 1;}}
void Generate2dArray(int Arr2d[row][col],const int rows = row,const int cols=col){
  srand(time(0));
  for(int i = 0; i < rows; i++)
    for(int j = 0; j < cols; j++)
      Arr2d[i][j]= rand()%100;}

int main() {
   
  int A1d[s];
  int A2d[row][col];
  Generate1dArray(A1d);
  Generate2dArray(A2d);
  Print1dArrByRec(A1d);
  cout << "\n\nsame array but in reverse order\n";
  Print1dArrayRevByRec(A1d);
  cout << "\n\n2d array by 10x10\n\n";
  Print2dArrByRec(A2d);
  cout << "\n\n2d array by 10x10 in Reverse order\n\n";
  Print2dArrRevByRec(A2d);
  cin.get();
  return 0;
}
Activate to view larger image,
