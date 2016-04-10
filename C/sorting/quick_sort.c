#include<stdio.h>
#include<conio.h>
void quickSort(int[], int, int);
int main()
{
    int array[10]={0,1,5,2,7,8,3,4,5,6};
    printf("******Quick Sort******\n");
    printf("Unsorted Array :");
    for(int k=0;k<10;k++)
    {
        printf("%d",array[k]);
    }
   quickSort(array,0,9);
    printf("\nSorted Array :");
    for(int k=0;k<10;k++)
    {
        printf("%d",array[k]);
    }
   getch();
   return 0; 
    }
    
    void quickSort(int arr[], int left , int right)
    {
        int i= left;
        int j=right;
        int pivot = arr[(left+right)/2];
        while(i<=j)
        {
            while(arr[i]<pivot)
                 i++;
              
            while(arr[j]>pivot)
                 j--;
            
            if(i<=j)
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++;
                j--;  
            }
            
         }
            if(left<j)
               quickSort(arr,left,pivot);
             if(i<right)
                quickSort(arr,pivot+1,right);
       
        }