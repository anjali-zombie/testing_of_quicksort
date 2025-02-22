#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int quick_partition(int arr[],int low,int high)
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
void quick_iterative(int arr[],int n)
{
	int *quick_st = (int *)malloc(sizeof(int) * 2 * n);
	int top_st = -1;
	quick_st[++top_st] = 0;
	quick_st[++top_st] = n-1;
	while (top_st >= 0)
	{
		int high = quick_st[top_st--];
		int low = quick_st[top_st--];
		int pt = quick_partition(arr,low,high);
		if(pt-1 > low)
		{
			quick_st[++top_st] = low;
		      	quick_st[++top_st] = pt-1;
		}
 		if(pt+1 < high){
			quick_st[++top_st] = pt+1;
			quick_st[++top_st] = high;
		}
	}
	free(quick_st);
}
int main()
{
        FILE* ptr1 = fopen("random.txt","r");
	FILE* ptr2 = fopen("qswor.txt","w");                                                                                                                                                                                                                                     
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
        quick_iterative(arr,n);
        for(int i =0 ; i<n;i++)
        {
                fprintf(ptr2,"%d\n",arr[i]);
        }
        return 0;
}

