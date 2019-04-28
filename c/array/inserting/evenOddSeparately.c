#include<stdio.h>

int main()
{
  int i,j=0,k=0,n;
  long int array[10];
  long int Earray[10];
  long int Oarray[10];
  
  printf("Enter the size of array ");
  scanf("%d",&n);

  printf("Enter %d elements in array  ",n);
  for(i=0;i<n;i++)
  {
    scanf("%ld",&array[i]);
  }

  for(i=0;i<n;i++)
  {
    if(array[i]%2==0)
    {
      Earray[j] = array[i];
      j++;
    }
    else
    {
     Oarray[k] = array[i];
     k++;
    }
  }

  printf("\nEven elements are  ");
  for(i=0;i<j;i++)
  {
    printf("%ld ",Earray[i]);
  }
  
  printf("\nOdd elements are  ");
  for(i=0;i<k;i++)
  {
    printf("%ld ",Oarray[i]);
  }
  
  printf("\n");
  return 0;

}
