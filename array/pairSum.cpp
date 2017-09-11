//Find Pair with given Sum
#include<iostream>
#include<algorithm>
using namespace std;
int findPair(int arr[],int sum,int len){
	for(int i=0;i<len-1;i++){
		for(int j=i+1;j<len;j++){
			if(arr[i]+arr[j]==sum)
				return arr[i];
		}
	}
	return 0;
}

int main(int argc,char const * argv[]){
	int arr[] ={8,1,4,0,4,5,7,1,0,2};
	int sum =11;
	int ans =findPair(arr,sum,10);
	cout<<ans<<","<<(sum-ans);
	return 0;
}