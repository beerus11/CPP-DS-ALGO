#include<iostream>
using namespace std;
int knapSack(int W,int wt[], int val[], int n){
	if(n==0||W==0)
		return 0;
	if(wt[n-1]>W)
		return knapSack(W,wt,val,n-1);
	return max(val[n-1]+knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n));
}
int main(){
	int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int  W = 50;
    int n = sizeof(val)/sizeof(val[0]);
	cout<<"Maximum value :: "<<knapSack(W,wt,val,n);
	return 0;
}