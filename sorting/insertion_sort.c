#include<stdio.h>
#include<conio.h>
int main(){
int array[10]={7,8,1,7,3,9,8,1,0,2};
printf("UnSorted Array: ");
 for (int k=0 ;k<10;k++){
        printf("%d",array[k]);
  }
  
for(int i=1;i<10;i++){
	int j=i;
	while(j>0 && array[j]<array[j-1]){
		int temp =array[j-1];
		array[j-1]=array[j];
		array[j]=temp;
		j--;
	}
}

 printf("\nSorted Array: ");
for(int k=0;k<10;k++){
	printf("%d",array[k]);
}
	getch();
	return 0;
}