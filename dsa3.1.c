#include<stdio.h>
int main(){
	int arr[100],n,key,i,found=-1;
	printf("enter the number of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
			}
			printf("enter element to search");
			scanf("%d",&key);
			for(i=0;i<n;i++){
				if(arr[i]==key){
					printf("element found at %d",i+1);
					found=1;
					break;
				}
			}
			if(found==0){
				printf("element not found");
			}
			return 0;
}
