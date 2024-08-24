#include <stdio.h>
int main(){
	int num = 323,rev=0,rem, orgNum = num;
	while(num != 0){
		rev = rev*10; // to make sure the first num is at the first biggest position 
		rem = num %10; // to extract the last num 
		rev = rev +rem; 
		num = num/10; // to make the number small, a float 
	}
// checking if pal or not , used orgNum cause we are using num inside the while loop so it can vary.
	if(orgNum == rev){
		printf("its is a pal");
	}
	else{
		printf("not a pal");
	}
}
