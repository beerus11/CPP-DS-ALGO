#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
  /* code */
  int array[]={9, 9, 3, 5, 9, 9, 6,10,11,9,9};
  int size = sizeof(array)/sizeof(array[0]);
  for (int i=0;i<size;i++)
  {
    int count=0;
    for(int j=1;j<size;j++)
    {
      if(array[i]==array[j])
      {
        count++;
        if(count>=size/2)
        {
          cout<<array[i];
          return 0;
        }
      }
    }
  }
  return 0;
}
