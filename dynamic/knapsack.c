#include <stdio.h>
int max(int a , int b){ return(a>b)?a:b;}
using namespace std;
int knapSack(int W , int wt[] , int val[] , int s){
  int mat[s+1][W+1];
  for(int i=0;i<=s;i++){
    for(int j=0;j<=W;j++){
      if(i==0|| j==0)
          mat[i][j]=0;
      else if (wt[i-1] <= j)
          mat[i][j] = max(val[i-1] + mat[i-1][j-wt[i-1]],  mat[i-1][j]);
      else
          mat[i][j] = mat[i-1][j];
    }
  }
  return mat[s][W];
}

int main(){
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    printf("%d", knapSack(W, wt, val, 3));
    return 0;
  }
