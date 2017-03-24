#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
@author Anurag
*/
int main() {
  // create a vector to store int
  int myints[] = {32,71,12,45,26,80,53,38};
  vector < int > vec(myints, myints + 8);
  sort(vec.begin(), vec.begin() + 8);
  vector < int > ::iterator f = vec.begin();
  vector < int > ::iterator l = vec.begin() + 7;
  int x = 50;
  while (f != vec.end()) {
    if (( * f) + ( * l) > x) {
      l--;
    } else if (( * f) + ( * l) < x) {
      f++;
    } else {
      cout << * f << "," << * l;
      break;
    }
  }
  return 0;
}
