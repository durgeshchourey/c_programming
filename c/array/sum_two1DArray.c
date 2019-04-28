#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i,n;

  int *a,*b,*c;

  printf("How many Elements in each array..\n");
  scanf("%d",&n);

  a = (int*) malloc(n*sizeof(int));
  b = (int*) malloc(n*sizeof(int));
  c = (int*) malloc(n*sizeof(int));

  printf("Enter elements of first List : \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",a+i);
  }

  printf("Enter elements of second List : \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",b+i);
  }

  for(i=0; i<n; i++)
  {
    *(c+i) = *(a+i) + *(b+i);
  }

  printf("Resultant List is \n");

  for(i=0; i<n;i++)
  {
    printf("%d\n",*(c+i));
  }

  return 0;
}
 


