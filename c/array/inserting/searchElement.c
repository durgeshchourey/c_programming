#include<stdio.h>

//int SearchElement(int array[],int n,int key);
int SearchElement(int array[],int n,int key)
{
  for(int i=0;i<n;i++)
	  if(array[i]==key)
      	    return i;
	   
  return -1;
}

int main()
{
  int array[10];
  int i,n,key,pos=0;
  
  printf("Enter the size of Array ");
  scanf("%d",&n);

  
  printf("Enter %d Elements in Array ",n);
  for(i=0; i<n; i++)
  {
    scanf("%d ",&array[i]);
  }
  
  printf("Enter the element to search ");
  scanf("%d\n",&key);

   pos = SearchElement(array,n,key);
      if (pos == -1)
      printf("Element not found");
      else
      printf("Element fount at position %d ",pos+1);      

  return 0;
}
