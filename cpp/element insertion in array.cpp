// Program to insert an element in a specified location
#include<stdio.h>
// print function to print Array
void printArray(int arr[],int n)
{
	int i=0;
	while(i<n)
	{
		printf("%4d",arr[i]);
		i++;
	}
}
// insertElement in a specified position
void insertElement(int arr[], int *numberOfElement, int lengthOfArray, 
										int newelement, int position)
{
	int j;
	int length = *numberOfElement;
	printf("length of Array %d",length);
	if(position < 0 || position >  length)
		printf("\n%d  Invalid position",position);
	else 
	{
		for(j = length; j > position; j--)
			arr[j] = arr[j-1];
		arr[position] = newelement;
		(*numberOfElement)++ ;
		printf("\nNow the New length of Array : %d",*numberOfElement);
	}
}
int main()
{
	int i,n,newelement,capacity,size,position,lengthOfArray,numberOfElement;
	int arr[50];
	size = sizeof(arr);
	printf("Size of Array arr : %d Bytes",size);
	printf("\nEnter number of element for an Array : ");
	scanf("%d",&numberOfElement);
	printf("\nThe number of element will be : %d",numberOfElement);
	printf("\n");
	for(i=0;i<numberOfElement;i++)
	{
		printf("Enter data : ");
		scanf("%d",&arr[i]);
	}
	lengthOfArray = sizeof(arr)/sizeof(arr[0]);
	printf("\nlength of Array : %d",lengthOfArray);
	printf("\n");
	printArray(arr,numberOfElement); // Calling printArray function
	printf("\nEnter an element to insert : ");
	scanf("%d",&newelement);
	printf("\nEnter the position you want to insert element : ");
	scanf("%d",&position);
	printf("\n");
	insertElement(arr, &numberOfElement, lengthOfArray, newelement, position);
	printf("\n");
	printArray(arr,numberOfElement); // Calling printArray function
	printf("\nThe new Array length is increased : %d",numberOfElement);
}
