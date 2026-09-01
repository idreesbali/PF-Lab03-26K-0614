#include <stdio.h>
int main() {
	printf("Enter a number: ");
	int num;
	scanf("%d", &num);
	if(num%2==0) {
		printf("\nEven");
		return 0;
	} else {
		printf("\nOdd");
	}
	return 0;
}