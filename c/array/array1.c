#include<stdio.h>

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
   for(i=0; i<10; i++)
   {
	   printf("%d\n", a[i]);
   }
//   system("PAUSE");
   return 0;
}
