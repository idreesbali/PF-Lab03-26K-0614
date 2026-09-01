#include <stdio.h>
#include <stdbool.h>
int main() {
	int num = 78;
	float ft = 5.9;
	char ch ='A';
	double dbl = 5.888999;
	bool val = true;
	printf("\nInteger data type is %d with size %zu",num,sizeof(num));
	printf("\nFloating point data type is %f with size %zu",ft,sizeof(ft));
	printf("\nCharacter data type is %c with size %zu",ch,sizeof(ch));
	printf("\nDouble data type is %lf with size %zu",dbl,sizeof(dbl));
	printf("\nBoolean data type is %d with size %zu",val,sizeof(val));
	return 0; 
}