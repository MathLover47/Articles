// Proof#represeting loops in other loops.cpp 
#include <iostream>
using namespace std;
const int N = 8;
const int M = 9;
bool compare1D(int[], int[]);
bool compare2D(int[][N], int[][N]);
int main()
{
    int a1[N*M] = { 0 }, a2[N*M] = { 0 };
    int b1[M][N], b2[M][N], i, j, c;
    // represting 2d loop by 1d loop
    for( i = 0; i < M; i++)
        for (j = 0; j < N; j++) {
            b2[i][j] = 5 * i * i + 7 * j;
            //cout << "i=" << i << " ; j=" << j << endl;
        }
    for (int s = 0; s < M*N; s++) {
        i = s % M;
        j = (s - i) / M;
       // cout << "i=" << i << " ; j=" << j << endl;
        b1[i][j] = 5 * i * i + 7 * j;
    }
    if (compare2D(b1, b2))
        cout << "equivalent loops: produce the same 1d loop containing 2d loop" << endl;
    else cout << "non equal arrays loops they are different\n";
    // represting 1d loop by 2d loop
    for (int i = 0; i < N*M; i++)
        a1[i] = 3 * i ;
    for (int i = 0; i < M; i++) 
        for (int j = 0; j < N; j++)
        {
            c = i * N + j;
            //cout << "c=" << c << endl;
            a2[c] = 3 * c;
        }
    if (compare1D(a1, a2)) 
        cout << "really equivalent in represeting 1d by 2d array:-)" << endl;
    else cout << "not equivalent" << endl;
    return 0;

}
bool compare2D(int a[M][N], int b[M][N]) {
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (a[i][j] != b[i][j])
                return false;
    return true;}

bool compare1D(int a[N*M], int b[N*M])
{
    for (int i = 0; i <= (N-1)*(M-1); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

