#include<stdio.h>
int main(){
	int n,i;
	int max;
	int maxindex;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	printf("enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);	
	}
	max=a[0];
	maxindex=0;
	for(i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
			maxindex=i;
		}
	}
	printf("max=%d at index %d",max,maxindex);
	return 0;
}
