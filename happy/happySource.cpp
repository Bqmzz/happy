#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	char name[20];
	printf("Enter name : ");
	gets_s(name);
	printf("Name length is %d\n", strlen(name));

	int num;
	int* i = &num;
	printf("Fav num : ");
	scanf_s("%d", &i);
	printf("Your Fav num is : %d \n", i);

	int score;
	printf("Your happiness score : ");
	scanf_s("%d", &score);
	if (score >= 0 && score <= 100) {
		if (score >= 80) {
			printf("%s is very happy", name);
		}
		else if (score >= 60 && score < 80) {
			printf("%s is happy", name);
		}
		else if (score >= 40 && score < 60) {
			printf("%s is quite happy", name);
		}
		else if (score >= 20 && score < 40) {
			printf("%s is less happy", name);
		}
		else if (score >= 0 && score < 20) {
			printf("%s is not happy", name);
		}
	}
	else printf("Error");
	return 0;
}