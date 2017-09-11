#include<bits/stdc++.h>
using namespace std;

int lps(char *str)
{
  int n = strlen(str);
  int mat[n][n];
  for(int i=0;i<n;i++)
    mat[i][i]=1;
  for(int i=1;i<n;i++){
    for(int j=2;j<n-i+1;j++){
      if(str[i]==str[j])
        mat[i-1][j-1]=mat[i-1][j]+1;
      else
        mat[i-1][j-1]=max(mat[i-1][j-2],mat[i][j-1]);
    }
  }

  return mat[0][n-1];
}

int main(){
    char seq[] = "GEEKS FOR GEEKS";
    int n = strlen(seq);
    printf ("The length of the LPS is %d", lps(seq));
    getchar();
    return 0;
}
