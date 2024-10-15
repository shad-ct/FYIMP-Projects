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
