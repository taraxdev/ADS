#include <stdio.h>
void main(){
	int i,n, min, max;
	printf("Enter the array size: \n");
	scanf("%d", &n);
	printf("Enter the elements: \n");
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}

	max = a[0];
	for(i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	printf("Largest Elements: %d \n", max);

	min = a[0];
	for(i=1;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	printf("Smallest element: %d",min);
}