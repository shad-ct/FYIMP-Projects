#include <stdio.h>

int main() {

	int col,row,a[50][50],b[50][50],sum[100][100];

	printf("Column of array : \n");
	scanf("%d",&col);	
	
	printf("Row of array : \n");
	scanf("%d",&row);

	printf("Enter members of array 1 :\n");

	for(int i=0; i<col; i++) {
		for(int j=0; j<row;j++) {
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n\nEnter members of array 2 :\n");

	for(int i=0; i<col; i++) {
		for(int j=0; j<row;j++) {
			scanf("%d",&b[i][j]);
		}
	}

	for(int i=0; i<col; i++) {
		for(int j=0; j<row;j++) {
		    sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("\n\nSum of 2 arrays :\n\n");

	for(int i=0; i<col; i++) {
		for(int j=0; j<row;j++) {
			printf("    %d\t",sum[i][j]);
		}
		printf("\n\n");
	}
}
