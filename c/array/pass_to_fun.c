#include<stdio.h>

void display(int a[], int num)
{
  int i;
  for(i=0; i<num; i++)
  {
    printf("%d\n",a[i]);
  }
}

int main()
{
  int a[10] = {0};
 
   int i;
   for(i=0; i<10; i++)
   {
     printf("Enter a number: ");
     scanf("%d", &a[i]);
   }
   printf("Numbers:\n");
   display(a,10);
   return 0;
}
