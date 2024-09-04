//
//  main.cpp
//  mLoopsToNloops
//
//  Created by Nedal Ahmed Husein AbuRuqaya on 8/31/24.
//  Copyright © 2024 Nedal Ahmed Husein AbuRuqaya. All rights reserved.
//
#include <chrono>
using namespace std::chrono;
#include <iostream>
using namespace std;
const int I = 100; //replace it by any positive integer
const int J = 100;//replace it by any positive integer
const int K = 100;//replace it by any positive integer
void IsIdentical(int a[I][J][K],int b[I][J][K]){
    for(int i = 0; i < I; i++)
        for(int j = 0; j < J; j++)
            for(int k = 0; k < K; k++){
                if( a[i][j][k] != b[i][j][k] ){
                    cout << "they are not identical, different arrays(one or more in same location is different \n";
                    return;
                } else
                    cout << "both are same array" << endl;
                return;
            }
}
int formula(int i, int j, int k) { //replace it by any type float, double or anything and don't forget to
    // replace the array type.
    return i+j+k ; // replace formula of what you want(i.e: return i*j*k or i+j*k return the second double.
}
int main() {
    int arr1[I][J][K]; // replace it by any type
    int arr2[I][J][K];
    auto beg = high_resolution_clock::now();
    for(int i = 0; i < I; i++)
        for(int j = 0; j < J; j++)
            for(int k = 0; k < K; k++){
                arr1[i][j][k] = formula(i,j,k);
            }
    auto end = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(end - beg);
    cout << "Elapsed Time of cubic 3looops is : " << duration1.count()<< endl;
    auto beg2 = high_resolution_clock::now();
    int i,j,k;
    i = j = k = 0;
    int I2 = I -1,J2 = J-1,K2 = K- 1;
    while(true){
        arr2[i][j][k] = formula(i, j, k);
        k++;
        if(k > K2){
            k = 0;
            j++;}
        if(j > J2){
            j = 0;
            i++;}
        if(i > I2){
            break;}}
    auto end2 = high_resolution_clock::now();
    auto duration2 = duration_cast<std::chrono::microseconds>(end2 - beg2);
    cout << "Elapsed Time of linear single loop is : " << duration2.count()<< endl;
    cout << "Cubic complexity is faster than linear  in  " << (float)duration2.count()/(float)duration1.count() << " times" << endl;
    IsIdentical(arr1, arr2);
    return 0;
}
