#include<iostream>
using namespace std;

int findPeakElement(int arr[],int start , int end){
	int mid = (start+end)/2;
	if((mid==0 || arr[mid]>=arr[mid-1])&&(mid==end-1 || arr[mid]>=arr[mid+1]))
		return arr[mid];

	else if(arr[mid]<arr[mid+1])
		return findPeakElement(arr,mid+1,end);

	else
		return findPeakElement(arr,mid,mid-1);
}

int main(){
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Index of a peak point is :: " << findPeakElement(arr,0,n);
    return 0;
}