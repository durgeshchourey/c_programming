#include<stdio.h>
#define MAX 4

int main()
{
  int i,num,temp;
  int array[MAX];
  int first_largest;
  int second_largest;

  printf("Enter %d integer numbers ",MAX);

  for(i=0; i<MAX;i++)
  {
    scanf("%d",&array[i]);
  }

  printf("Input Integers are \n");
  for(i=0;i<MAX;i++)
  {
    printf("%5d",array[i]);
  }
  printf("\n");

  first_largest = array[0];
  second_largest = array[1];

  if(first_largest < second_largest)
  {
      temp = first_largest;
      first_largest = second_largest;
      second_largest = temp;
  }

  for(i=2; i<4; i++)
  {
    if(array[i] >= first_largest)
     {
       second_largest = first_largest;
       first_largest = array[i];
     }

    else if( array[i] > second_largest)
    {
      second_largest = array[i];
    }

  }
  printf("\n%d is the first largest \n",first_largest);
  printf("%d is the second largest \n",second_largest);
  printf("\n Average of %d and %d = %d \n",first_largest,second_largest,(first_largest + second_largest)/2);

}
