#include<stdio.h>

int insertKey(int array[],int n,int key,int capacity)
{
  if(n >= capacity)
	  return n;

  array[n] = key;

  return (n+1);
  
}



int main()
{
  int array[10] = {10,20,30,40,50};
  int capacity = sizeof(array)/sizeof(array[0]);
  printf("%d\n",capacity);
  int n=6;
  int i,key=6;

  printf("\n Elements before insertion: ");
  for(i=0;i<n;i++)
	  printf("%d  ",array[i]);

  //Inserting the element

  n = insertKey(array,n,key,capacity);

  
  printf("\n Elements After insertion: ");
  for(i=0;i<n;i++)
	  printf("%d  ",array[i]);
  return 0;
}
