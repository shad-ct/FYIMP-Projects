#include <stdio.h>
#include <string.h>

int main()
{
	// compare 2 string without a function

	int flag, i;
	char string1[100],string2[100];
	printf("entere the 2 strings : \n");
	scanf("%s",string1);
	scanf("%s",string2);

	for(i=0; string1[i] != '\0' && string2[i] != '\0';i++) {
		if(string1[i] != string2[i]) {
			flag = 1;
		}
	}
	if(flag == 0) {
		printf("same");
	}
	else{
	    printf("not same");
	}

}
