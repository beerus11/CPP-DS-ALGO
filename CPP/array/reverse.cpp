#include <iostream>
#include <algorithm>
int main(int argc, char const *argv[]) {
  /* reverse an array*/
  int SIZE = 10;
  int arr [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int out[SIZE];
  int i=0;
  for(int i=0;i<SIZE;i++)
  {
    out[i]=arr[SIZE-i-1];
  }

  for(int j=0;j<SIZE;j++)
  {
    std::cout << out[j] << std::endl;
  }
  return 0;
}
