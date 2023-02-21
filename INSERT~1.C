#include <stdio.h>
#include <conio.h>

void insert(int arr[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++) {
	temp = arr[i];
	j = i - 1;

	while( j >= 0 && temp <= arr[j])
	{
	    arr[j+1] = arr[j];
	    j = j-1;
	}
	arr[j+1] = temp;
    }
}


void print_arr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
	printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[100];
    int n,i;
    clrscr();

    printf("\nEnter Size of Array: ");
    scanf("%d", &n);

    printf("\n\nEnter Elements of Array: \n");
    for( i = 0; i<n; i++ )
    {
	scanf("%d",&arr[i]);
    }

    printf("\n\nBefore sorting array elements: \n");
    print_arr(arr, n);

    insert(arr, n);

    printf("\n\nAfter sorting array elements: \n");
    print_arr(arr, n);

getch();
    return 0;
}