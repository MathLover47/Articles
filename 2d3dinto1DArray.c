/* this program is proof for converting arrays into 1D array and convert it back of its original dimension, suppose you want to search class or structure given member, and you do that frequently. so it will be wise to store it in 1D array and sort it (numeric or text) then you can search it in binary search quickly*/ 
// after deducing I found only new is the proof and converting back
// to its original dimension by reversing assignment
// enjoy this article in programming theory and now C lang.
//program in C language
#include <stdio.h>
const int M = 5;
const int N = 6;
const int K = 3;
void PrintSeparator(){
    printf("\n\n");
    for(int i = 1; i < 30; i++)
        printf("-");
    printf("\n\n");
    for(int i = 1; i < 30; i++)
        printf("_");
    printf("\n\n");

}
void Print1DArr(int arr[],const int size){
    for(int i = 0; i < size; i++){
        if(i% 10 == 0)
            printf("\n");
        printf("%d, ", arr[i]);
    }
     printf("\n\n");
}
void Print2DArr(int arr[M][N],const int m,const int n){
    for(int i = 0; i < m; i++){
        printf("\n");
        for(int j=0; j < n; j++)
            printf("%d, ", arr[i][j]);
    }
     printf("\n\n");
}

void Print3DArr(int arr[M][N][K],const int m,const int n, const int k){
    for(int l= 0; l < k; l++){
        printf("\nin 3d = %d\n ",l);
        for(int i = 0; i < m; i++){
            printf("\n");
            for(int j=0; j < n; j++)
                printf("%d, ", arr[i][j][l]);
           
        }}
     printf("\n\n");
        }

int main() {
    
    int Arr1Dfrom2D[M*N];
    int Arr2D[M][N];
    int Arr2Dfrom1D[M][N];
    int Arr1Dfrom3D[M*N*K];
    int Arr3D[M][N][K];
    int Arr3Dfrom1D[M][N][K];
    for(int i=0; i < M; ++i)
        for(int j=0; j < N; ++j)
            Arr2D[i][j] = i+j;
    for(int i=0; i < M; ++i)
        for(int j=0; j < N; ++j)
            for(int k = 0; k < K; k++)
            Arr3D[i][j][k] = i+j+k;
    for(int i=0; i < M; ++i)
        for(int j=0; j < N; ++j)
            Arr1Dfrom2D[N*i + j] = Arr2D[i][j];
    for(int k = 0; k < K; k++)
       for(int i=0; i < M; ++i)
            for(int j=0; j < N; ++j)
                    Arr1Dfrom3D[k*(M*N)+(N*i+j)]= Arr3D[i][j][k];
    for(int k = 0; k < K; k++)
        for(int i=0; i < M; ++i)
            for(int j=0; j < N; ++j)
                Arr3Dfrom1D[i][j][k] = Arr1Dfrom3D[k*(M*N)+(N*i+j)];
    for(int i=0; i < M; ++i)
        for(int j=0; j < N; ++j)
            Arr2Dfrom1D[i][j] = Arr1Dfrom2D[N*i + j];
    Print2DArr(Arr2D, M, N);
    Print1DArr(Arr1Dfrom2D, M*N);
    PrintSeparator();
    Print3DArr(Arr3D, M, N, K);
    Print1DArr(Arr1Dfrom3D, M*N*K);
    PrintSeparator();
    Print2DArr(Arr2Dfrom1D, M, N);
    Print1DArr(Arr1Dfrom2D,M*N);
    PrintSeparator();
    Print3DArr(Arr3Dfrom1D, M, N, K);
    Print1DArr(Arr1Dfrom3D, N*M*K);
    PrintSeparator();
    

    
    
    return 0;
    
} 