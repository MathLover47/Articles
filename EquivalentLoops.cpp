// EquivalentLoops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
const int M = 3, N = 4, K = 5;
bool Compare3d(int A1[M][N][K], int A2[M][N][K]) {
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            for (int k = 0; k < K; k++)
                if (A1[i][j][k] != A2[i][j][k])
                    return false;
    return true;
}
int main()
{
    int A123[M][N][K], A132[M][N][K], A213[M][N][K], A231[M][N][K], A312[M][N][K], A321[M][N][K];
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            for (int k = 0; k < K; k++)
                A123[i][j][k] = 2 * i * i + 3 * j + 5*k;
   
    
    for (int i = 0; i < M; i++)
        for (int k = 0; k < K; k++)
        for (int j = 0; j < N; j++)
            
                A132[i][j][k] = 2 * i * i + 3 * j + 5 * k;
    
    
    
    for (int j = 0; j < N; j++)

    for (int i = 0; i < M; i++)
            for (int k = 0; k < K; k++)
                A213[i][j][k] = 2 * i * i + 3 * j + 5 * k;
    
    for (int j = 0; j < N; j++)
        
            for (int k = 0; k < K; k++)
                for (int i = 0; i < M; i++)

                A231[i][j][k] = 2 * i * i + 3 * j + 5 * k;
    
    for (int k = 0; k < K; k++)
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            
                A312[i][j][k] = 2 * i * i + 3 * j + 5 * k;
    
    for (int k = 0; k < K; k++)
        for (int j = 0; j < N; j++)
            for (int i = 0; i < M; i++)

                A321[i][j][k] = 2 * i * i + 3 * j + 5 * k;
    if (Compare3d(A123, A132) && Compare3d(A123, A213) && Compare3d(A231, A213)
        && Compare3d(A312, A213) && Compare3d(A321, A213))
        cout << "Equivalent\n";
    else
        cout << "certain error here.\n";
    return 0;

}

