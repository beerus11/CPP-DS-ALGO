#include<stdio.h>
#include<conio.h>
int main()
{
    int array[10]={0,1,5,2,7,8,3,4,5,6};
    printf("******Insertion sorting******\n");
    printf("Unsorted Array :");
    for(int k=0;k<10;k++)
    {
        printf("%d",array[k]);
    }
    for(int i=1;i<10;i++)
    {
        int j=i;
        while(j>0 && array[j]<array[j-1])
        {
            int temp=array[j-1];
            array[j-1]=array[j];
            array[j]=temp;
            j--;
            }
        }
    printf("\nSUnsorted Array :");
    for(int k=0;k<10;k++)
    {
        printf("%d",array[k]);
    }
   getch();
   return 0; 
    }