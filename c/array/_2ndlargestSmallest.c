#include<stdio.h>
#define MAX 40
int main()
{
  int array[MAX];
  int i,n,a,j;

  printf("Enter the no of elements in Array <40\n");
  scanf("%d",&n);

  printf("Enter Elements in Array\n");
  for(i=0;i<n;++i)
  {
    scanf("%d",&array[i]);
  }

  for(i=0; i<n; ++i)
  {
     for(j = i+1; j<n; ++j)
     {
       if(array[i] < array[j])
       {
           a = array[i];
	  array[i] = array[j]; 
	  array[j] = a;
       }
     }
  }

  printf("The numbers arranged in decending order are given below\n");
 
  for(i=0;i<n;++i)
  {
    printf("%d\n",array[i]);
  }


  printf("The 2nd Largest number is = %d\n",array[1]);
  printf("The 2nd Smallest number is = %d\n",array[n-2]);
}
