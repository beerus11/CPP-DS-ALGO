#include <stdio.h>
#include <conio.h>
int main(){
int array[10]={0,1,5,2,7,8,3,4,5,6};
for(int i=0;i<10;i++){
	for(int j=i;j<10;j++){
		if(array[i]>array[j]){
			int temp =array[i];
			array[i]=array[j];
			array[j]=temp;
		}
	}
}
for(int k=0;k<10;k++){
	printf("%d\n",array[k]);
}
getch();
return 0;
}