#include <stdio.h>
#include <stdbool.h>
int main() {
	int num=1;
	char ch[50] = "Idrees";
	float fl=9.8;
	char ch2='B';
	double d=9.566798;
	bool bl=false;
	printf("%d, %s, %.2f, %lf, %d, %c", num, ch, fl, d, bl, ch2);
	return 0;
}