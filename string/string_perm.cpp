#include<iostream>
#include<string.h>

using namespace std;

void swap(char *a , char *b){
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;

}

void permutate(char *a , int l , int r){
	if(l==r){
		cout<<a<<endl;
		return;
	}
	else{
		for(int i=l;i<=r;i++){
			swap(a[i],a[l]);
			permutate(a,l+1,r);
			swap(a[i],a[l]);
		}
	}

}

int main(){
	char mystr[]= "ABC";
	int len = strlen(mystr);
	permutate(mystr,0,len-1);
	return 0;
}