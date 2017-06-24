#include <stdio.h>
#include <conio.h>
// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[],int low,int high){
	int pivot = arr[high];
	int ind = low-1;
	for(int i=low;i<=high;i++){
		if(arr[i]<pivot){
			ind++;
		}
	}
	 swap(&arr[ind + 1], &arr[high]);
	return (ind+1);
}

void quickSort(int arr[], int low ,int high){
	if(low>high){
		int pIndex = partition(arr,low high);
		quickSort(arr,low,pIndex-1);
		quickSort(arr,pIndex+1,high);
	}
}

int main(){
int array[10]={7,8,1,7,3,9,8,1,0,2};
printf("UnSorted Array: ");
 for (int k=0 ;k<10;k++){
        printf("%d",array[k]);
 }

quickSort(array,0,9);
 printf("\nSorted Array: ");
for(int k=0;k<10;k++){
	printf("%d",array[k]);
}
	getch();
	return 0;
}

