#include <stdio.h>
int main() {
	printf("Enter your age and height: ");
	int age;
	float height;
	scanf("%d %f",&age, &height);
	printf("\nYou are %d years old and %.2f meters tall.", age, height);
	return 0;
}