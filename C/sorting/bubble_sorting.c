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
        for(int j=i;j<10;j++)
        {
            if(array[i]>array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
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
   