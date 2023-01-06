#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i, j, k, r, c, sum = 0, temp = 0;
	int arr[] = {20,40,10,30,60,50};
	int length = sizeof(arr)/sizeof(arr[0]);
	int a[10][10],b[10][10],mul[10][10];

	clrscr();

	printf("\nEnter the value of 'n': ");
	scanf("%d",&n);

	for(i = 1; i<=n; i++)
	{
		sum = sum + i;
	}

	printf("\nSum of 'n'(%d) is %d\n",n,sum);

	if(sum % 2 == 0)
	{
		printf("\n%d is Even Number\n", sum);
	}
	else
	{
		printf("\n%d is Odd Number\n",sum);
	}

	printf("\nElements of original array: ");

	for(i = 0; i< length; i++ )
	{
		printf("%d ",arr[i]);
	}

	for ( i = 0; i < length; i++)
	{
		for ( j = i+1; j < length; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("\n");

	printf("\nElements of array sorted in ascending order: ");

	for( i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\nElements of array sorted in desending order: ");

	for(i = length - 1; i>=0; i--)
	{
		printf("%d ",arr[i]);
	}



	printf("\nEnter the number of row= ");
	scanf("%d",&r);

	printf("\nEnter the number of column= ");
	scanf("%d",&c);

	printf("\nEnter the first matrix element= \n");

	for( i = 0; i < r; i++)
	{
		for( j = 0; j < c; j++)
		{
			scanf("%d ",&a[i][j]);
		}
	}

	printf("\nEnter the second matrix element= \n ");
	for( i = 0; i < r; i++)
	{
		for( j = 0; j < c; j++)
		{
			scanf("%d ",&b[i][j]);
		}
	}

	printf("\nProduct of the matrix=\n ");
	for( i = 0; i < r; i++)
	{
		for( j = 0; j < c; j++)
		{
			mul[i][j] = 0;
			for( k = 0; k < c; k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}

	for( i = 0; i < r; i++)
	{
		for( j = 0; j < c; j++)
		{
			printf("%d \t",mul[i][j]);
		}
	printf("\n");
	}

	getch();
	return 0;
}
