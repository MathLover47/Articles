//
//  main.cpp
//  mLoopsToNloops
//
//  Created by Nedal Ahmed Husein AbuRuqaya on 9/2/24.
//  Copyright © 2024 Nedal Ahmed Husein AbuRuqaya. All rights reserved.
//
#include <chrono>
using namespace std::chrono;
#include <iostream>
using namespace std;
const int I = 100; //replace it by any positive integer
const int J = 100;//replace it by any positive integer
const int K = 100;//replace it by any positive integer
int main() {
    double arr1[I][J][K]={0}; // replace it by any type
    auto beg1 = high_resolution_clock::now();
    for(int i = 1; i < I; i++)
        for(int j = 1; j < J; j++)
            for(int k = 1; k < K; k++){
                arr1[i][j][k] = i+j+k;
            }
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(end1 - beg1);
    cout << "Elapsed Time of (+) in 3looops is : " << duration1.count()<< endl;
    auto beg2 = high_resolution_clock::now();
    for(int i = 1; i < I; i++)
        for(int j = 1; j < J; j++)
            for(int k = 1; k < K; k++){
                arr1[i][j][k]=i-j-k;
            }
    auto end2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(end2 - beg2);
    cout << "Elapsed Time of (-) in 3looops is : " << duration2.count()<< endl;
    auto beg3 = high_resolution_clock::now();
    for(int i = 1; i < I; i++)
        for(int j = 1; j < J; j++)
            for(int k = 1; k < K; k++){
                arr1[i][j][k] = i*j*k;
            }
    auto end3 = high_resolution_clock::now();
    auto duration3 = duration_cast<microseconds>(end3 - beg3);
    cout << "Elapsed Time of (*) in 3looops is : " << duration3.count()<< endl;
    auto beg4 = high_resolution_clock::now();
    for(int i = 1; i < I; i++)
        for(int j = 1; j < J; j++)
            for(int k = 1; k < K; k++){
                arr1[i][j][k] = i/j/k;
            }
    auto end4 = high_resolution_clock::now();
    auto duration4 = duration_cast<microseconds>(end4 - beg4);
    cout << "Elapsed Time of (/) in 3looops is : " << duration4.count()<< endl;
    return 0;
}

