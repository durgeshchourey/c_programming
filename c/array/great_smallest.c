#include<stdio.h>
#include<limits.h>

//#define greatest INT_MIN
//#define lowest   INT_MAX
int main()
{
   int ar[10];
   int len;
   int greatest = -100000;
   int lowest = 100000;
   int sum =0;
   double average=0;

   printf("Enter size of array but it should be less than 10 :");
   scanf("%d",&len);
   if(len > 10)
   {
     printf("Invalid Length");
     return;
   }
   for(int i=0;i < len; i++)
   {
     printf("Enter elements of array : ");
     scanf("%d",&ar[i]);
     sum += ar[i];
   }

   for(int i=0;i<len;i++)
   {
     if(greatest < ar[i])
	 greatest = ar[i];
     if(lowest > ar[i])
	 lowest = ar[i];
   }

   printf("Greatest = %d\n Lowest = %d\n",greatest,lowest);
   printf("Sum of all elements = %d\n",sum);
   average = 1.0*sum/len;
   printf("Average of all elements = %f\n",average);


  return 0;
}
