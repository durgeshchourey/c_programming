#include<stdio.h>
#define RIGHT 1
#define LEFT  0

void rotate_array(int array[],int N,int dir,int count)
{
  int i,temp; 
  if(dir == RIGHT)
  {	  
   while(count)
   {
      temp = array[N-1];
      for(int i=N-1; i>=N; i--)
	      array[i] = array[i-1];

      array[0] = temp;
     count--;
   }
  }
   else
   {
     while(count)
     {
        int temp = array[0];
	for(int i=0; i<=N-2; i++)
		array[i] = array[i+1];

	array[N-1] = temp;
	count --;
     
     }
   
   }
}

void display(int array[],int N)
{
  int i;
  printf("\n");
  for(i=0;i<N;i++)
  {
    printf(" %d",array[i]);
  }

}

int main()
{
  int array[8] = {10,20,30,40,50,60,70,80};

  display(array,8);
  rotate_array(array,8,RIGHT,3);
  display(array,8);

}
