#include<stdio.h>
void merge(int a[],int low,int mid,int high){
	int i=low,j=mid+1,k=0;
	int temp[100];
	while(i<=mid&& j<=high){
	if(a[i]<=a[j])
	temp[k++]=a[j++];
	else
	temp[k++]=a[j++];
	}
	while(j<=mid)
	temp[k++]=a[j++];
	for(i=low,k=0;i<=high;i++,k++)
	a[i]=temp[k];
}
void mergesort(int a[],int low,int high){
	if(low<high){
		int mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
	}
	int main(){
		int a[100],n,i;
		printf("enter number of element");
		scanf("%d",&n);
		printf("enter array element");
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		mergesort(a,0,n-1);
		printf("sorted array");
		for(i=0;i<n;i++)
		printf("%d",a[i]);
		return 0;
	}
