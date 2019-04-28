#include<stdio.h>

void display(int a[], int num)
{
  int i;
  for(i=0; i<num; i++)
  {
    printf("%d\n",a[i]);
  }
}

int largest(int arr[], int num)
{
  int largest = arr[0];
  for(int i=1; i<num; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }
  return largest;
}

int main()
{
  int a[10] = {0};
 
   int i;
   printf("Enter 10 numbers: ");
   for(i=0; i<10; i++)
   {
     scanf("%d", &a[i]);
   }
   printf("Largest: %d\n",largest(a,10));
   
   return 0;
}
