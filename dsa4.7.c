#include<stdio.h>
int main()
{
	int a[5],i,j,key;
	printf("enter 5 elements\n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	for(i=1;i<5;i++){
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	printf("sorted array");
	for(i=0;i<5;i++)
	printf("%d",a[i]);
	return 0;
}
