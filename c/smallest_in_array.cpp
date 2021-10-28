# include <stdio.h>
int main()
{
	int arr[50],ele,size,smallest;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	printf("Enter the elements of array: ");
	for (ele=0;ele < size;ele++){
		scanf("%d",&arr[ele]);
	}
	smallest= arr[0];
	for (ele=0;ele < size;ele++){
		if (arr[ele] < smallest)
		smallest=arr[ele];
	}
	printf("Enter the smallest elements of array is:  %d",smallest);
}
