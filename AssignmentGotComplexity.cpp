//
//  main.cpp
//  AssignmentGotComplexity
//
//  Created by Nedal Ahmed Husein AbuRuqaya on 9/4/24.
//  Copyright © 2024 Nedal Ahmed Husein AbuRuqaya. All rights reserved.
//
#include <chrono>
using namespace std::chrono;
#include <iostream>
using namespace std;
#include <string>
const int m = 13;// change it to get extra space in memory considering that your pc supporting that
const int n = 99;// if you want to incrrement you will get certain delay before finished.

int main() {
    string s = "hello world!";
    for(int i = 0 ; i < m; i++)
        s += s;
    string arr[n];
    auto begin = high_resolution_clock::now();
    for(int j = 0; j < n; j++)
        arr[j] = s;
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - begin);
    cout << "assignment " << n << " times" << "\n of string " << 12*m << " length" << endl;
    cout << "\n" << duration.count() << endl;
    return 0;
    
}
