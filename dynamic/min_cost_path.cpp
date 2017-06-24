#include<bits/stdc++.h>
using namespace std;
#define R 3
#define C 3

int min(int x , int y , int z){
  return min(min(x,y),z);
}

int minCost(int mat[R][C] , int m , int n){
  for(int i=0 ;i<m;i++ ){
    for(int j=0;j<n;j++){
      if(i==0 && j==0){

      }
      else if(i==0){
        mat[i][j]=mat[i][j-1]+mat[i][j];
      }
      else if (j==0){
        mat[i][j]=mat[i-1][j]+mat[i][j];
      }
      else{
        mat[i][j]=mat[i][j]+min(mat[i-1][j-1],mat[i][j-1],mat[i-1][j]);
      }
    }
  }
  return mat[m-1][n-1];
}

int main(){
  int cost[R][C]={
    {1,2,3},
    {4,8,2},
    {1,5,3}
  };
  printf("%d",minCost(cost,3,3));
  return 0;
}
