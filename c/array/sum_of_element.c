#include<stdio.h>
#define MAX_SIZE 10

int main()
{
    int array[MAX_SIZE];
    int num,negative_sum =0,positive_sum=0;
    int total = 0;
    double average = 0; 

    printf("Enter the value of N ");
    scanf("%d\n",&num);

    printf("Enter %d numbers (+ve,-ve,0) ",num);

    for(int i=0;i<num;i++)
    {
       scanf("%d",&array[i]);
    }
    printf("Input array elements are \n");

    for(int i=0; i<num;i++)
    {
        printf("%d",array[i]);
    }
    
    for(int i=0;i<num;i++)
    {
         if(array[i]<0)
         {
            negative_sum = negative_sum + array[i];
         }
         else if (array[i]>0)
         {
               positive_sum = positive_sum + array[i];/* code */
         }
         else if(array[i]==0)
         {
             ;   /* code */
         }
         
         total = total + array[i];
    }
    
    average = total/num;

   printf("\nSum of all negative number : %d ",negative_sum);
   printf("\nSum of all positive number : %d ",positive_sum);
   printf("\nAverage of all number : %ld\n ",average);

   return 0;
}
