#include<stdio.h>
#include<conio.h>

int main()
{
   int arr[10];
   int n=10;
   int i, j, position, swap;
   clrscr();

   printf("\n\n***SELECTION_SORT***\n\n");

   for (i = 0; i<n ; i++)
   {
       printf("Enter the Element of Array: ");
       scanf("%d",&arr[i]);
   }

   printf("\n\nElement of Array Before Sorting:\n");
   for (i = 0; i<10 ; i++)
   {
      printf("%d\t",arr[i]);
   }

   for (i = 0; i < (n - 1); i++)
   {
      position = i;
      for (j = i + 1; j < n; j++)
      {
	 if (arr[position] > arr[j])
	    position = j;
      }
      if (position != i)
      {
	 swap = arr[i];
	 arr[i] = arr[position];
	 arr[position] = swap;
      }
   }
   printf("\n\nElement of Array After Sorting:\n");

   for (i = 0; i < n; i++)
   {
      printf("%d\t", arr[i]);
   }
getch();
   return 0;
}