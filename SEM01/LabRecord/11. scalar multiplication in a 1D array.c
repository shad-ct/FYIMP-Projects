#include <stdio.h>

int main() {

	int arr[100],len,i,mul,res[100];

	printf("enter your array length : ");
	scanf("%d",&len);

	printf("enter your elements : \n");
	for(i=0; i<len; i++) {
		scanf("%d",&arr[i]);
	}

	printf("enter your number to multiply : ");
	scanf("%d",&mul);

	for(i=0; i<len; i++) {
		res[i] = arr[i]*mul;
	}

	for(i=0; i<len; i++) {
		printf("%d \t",res[i]);

	}
}
