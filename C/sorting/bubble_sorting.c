#include <conio.h>
#include<stdio.h>
int  main()
{
    int array[10]={7,8,1,7,3,9,8,1,0,2};
    printf("******Bubble Sorting****** \n");
    printf("UnSorted Array : ");
    for (int k=0 ;k<10;k++)
       {
           printf("%d",array[k]);
           }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10-i;j++)
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                }
            }
        }
        printf("\nSorted Array : ");
       for (int k=0 ;k<10;k++)
       {
           printf("%d",array[k]);
           }
    getch();
    return 0;
    }
   