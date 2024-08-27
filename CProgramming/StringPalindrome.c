

#include <stdio.h>
#include <string.h>
int main(){
	char name[100] = "malayalam";
	int i , j,length=0,flag = 1;
	while(name[length]!='\0'){ // process of strlen() , you can also do strlen(name);
		length++;
	}
	for(i=0,j=length-1; i<j ; i++,j--){
		if(name[i]!=name[j]){
			flag = 0;
			break;
		}
	}
	if(flag == 1){
		printf("pal");
	}
	else{
		printf("not");
	}
}

// ANOTHER METHOD

/*
#include <stdio.h>
#include <string.h>
int main(){
	char string[100],rev[100];
	scanf("%s",string);
	strcpy(rev,string);//(to, from)
 	strrev(rev);
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

*/
