#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,num, sum=0;
  int *a;

  printf("Enter the size of array A\n");
  scanf("%d",&num);

  a = (int*)malloc(num*sizeof(int));

  printf("Enter elements of List \n");

  for(i=0;i<num;i++)
  {
    scanf("%d",a+i);
  }

  for(i=0; i<num; i++)
  {
    sum = sum + *(a+i);
  }

  printf("Sum of all elements in arrya = %d\n",sum);

}
