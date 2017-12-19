#include<iostream>
using namespace std;
int multiply(int array[], int len){
    int ans=1;
    for(int i=0;i<len;i++){
        ans*=array[i];
    }
    return ans;
}
//Driver Program
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(array)/sizeof(array[0]);
    //Function call to calculate product
    cout<<multiply(array, n);
    return 0;
}