#include <iostream>
#include <algorithm>
#define NA -1
using namespace std;
int main(int argc, char const *argv[]) {
  /* Merge an array of size n into another array of size m+n */
  int arr1[]={2, NA,7,NA,NA,10,NA};
  int arr2[]={5, 8,12,14};
  int m = sizeof(arr1)/sizeof(arr1[0]);
  int n = sizeof(arr2)/sizeof(arr2[0]);
  int j=0;
  for(int i=0; i<m;i++)
  {
      if(arr1[i]==NA)
      {
        arr1[i]=arr2[j];
        j++;
      }
  }
  for(int k=0;k<m;k++)
  {
    cout << arr1[k] <<endl;
  }

  return 0;
}
