#include<stdio.h>
int main(){
	int n,key;
	int low,high,mid;
	int found=-1;
	printf("enter number of elements");
	scanf("%d",&n);
	int arr[n];
	printf("enter sorted array element");
	int i;
	
	// taking input
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("enter key");
	scanf("%d",&key);
	low=0;
	high=n-1;
	while(low<=high){
		//printf("hello bpmce");
		mid=low+high/2;
		if(arr[mid]==key){
			found= mid;
			break;
		}
		else if(arr[mid]<key){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
if(found!=-1){
printf("element found at index %d\n",found);
}
else{
	printf("element not found");
}
	return 0;	
	}
	

