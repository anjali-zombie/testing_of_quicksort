#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int partition(int arr[],int low,int high)
{
	int i=-1;
	low=0;
	int temp;
	int pivot = arr[high];
	while(low <= high)
	{
		if(arr[low] < pivot)
		{
			i=i+1;
			temp = arr[i];
			arr[i] = arr[low];
			arr[low] = temp;
		}
		else if(low == high)
		{
			i++;
			temp = arr[i];
			arr[i]= arr[low];
	       		arr[low] = temp;
			pivot = low;
		}
		low++;	
	}
	return pivot;	
}
void quick_recursion(int arr[],int low,int high)
{
	if(low<high){
		int pt = partition(arr,low,high);
		quick_recursion(arr,low,pt-1);
		quick_recursion(arr,pt+1,high);
	}
}
int main()
{
	FILE* ptr1 = fopen("random.txt","r");
	FILE* ptr2 = fopen("qswr.txt","w");
	int arr[20];
	int temp;
	int i=0;
	int n = sizeof(arr) /sizeof(arr[0]);
	if(ptr1 == NULL){
		printf("eroor occured");
		return 1;
	}
	while(fscanf(ptr1,"%d",&temp) == 1) {
		if( i<20)
		{
			arr[i] = temp;
		}
		else
		{
			break;
		}
		i++;
	}
	quick_recursion(arr,0,n-1);
	for(int i =0 ; i<n;i++)
	{
		fprintf(ptr2,"%d\n",arr[i]);
	}
	return 0;
}

			





