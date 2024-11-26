#include <stdio.h>

int main() {
	struct student {
		char name[20];
		int roll, mark1, mark2, mark3;
		float percentage;
	};

	struct student students[10];

	for (int i = 0; i < 10; i++) {
		printf("Name: ");
		scanf("%s", students[i].name);
		printf("Roll no.: ");
		scanf("%d", &students[i].roll);
		printf("Mark 1 out of 30: ");
		scanf("%d", &students[i].mark1);
		printf("Mark 2 out of 30: ");
		scanf("%d", &students[i].mark2);
		printf("Mark 3 out of 30: ");
		scanf("%d", &students[i].mark3);

        students[i].percentage = ((students[i].mark1 + students[i].mark2 + students[i].mark3) / 90.0 )* 100;
	}
	    printf("\n--------------------------------- \n");

	for (int i = 0; i < 10; i++) {
	    printf("--------------------------------- \n");
		printf("Name: %s\n",students[i].name);
		printf("Roll number : %d\n",students[i].roll);
		printf("Mark 1 : %d \n",students[i].mark1);
		printf("Mark 2 : %d \n",students[i].mark2);
		printf("Mark 3 : %d \n",students[i].mark3);
		printf("Percentage : %f \n",students[i].percentage);
	    printf("--------------------------------- \n");

	}
}
