#include <stdio.h>
#include <string.h>
int main(){
	char string[100],rev[100];
	scanf("%s",string);
	strcpy(rev,string);//(to, from)
	//if(rev == string), dont do this cause it compares the memory addresses. 
	//becasue they are arrays
	// instead compine them, it compares the string and returns 0 if they are equal lol 
	if (strcmp(rev, string) == 0){
		printf("its a pal");
	}
	else{
		printf("its not a pal");
	}
	
}
