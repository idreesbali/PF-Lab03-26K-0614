#include <stdio.h>
int main() {
	printf("Enter your name:");
	char ch[50];
	fgets(ch,50,stdin);
	puts(ch);
	return 0;
}