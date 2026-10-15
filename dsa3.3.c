#include<stdio.h>
int main(){
	int n,i,key;
	 int count=0;
	printf("enter n:");
	scanf("%d",&n);
	int a[n];
	printf("enter element:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
}
    printf("enter key:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
    	if(a[i]==key){
    		count++;
		}
	}
		printf("count=%d",count);
		return 0;
			}

