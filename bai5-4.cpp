#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int a = 10, b = 8, c = 6, d = 5, e = 2;
	
	printf("Nhap cac gia tri a = 10, b = 8, c = 6, d = 5, e = 2\n");
	printf("Gia tri cac bieu thuc la :\n");
	printf("\tR = a - b - c - d = %d\n", a - b - c - d);
    printf("\tR = a - b + c - d = %d\n", a - b + c - d);
    printf("\tR = a + b / c / d = %d\n", a + b / c / d);
    printf("\tR = a + b / c * d = %d\n", a + b / c * d);
    printf("\tR = a / b * c * d = %d\n", a / b * c * d);
    printf("\tR = a %% b / c * d = %d\n", a % b / c * d);
    printf("\tR = a %% b %% c %% d = %d\n", a % b % c % d);
    printf("\tR = a - ( b - c ) - d = %d\n", a - ( b - c ) - d);
    printf("\tR = ( a - ( b - c )) - d = %d\n", ( a - ( b - c )) - d);
	printf("\tR = a - ((b - c ) - d ) = %d\n", a -(( b - c ) - d));
	printf("\tR = a %% (b %% c) * d * e = %d\n", a % (b % c) * d * e);
	printf("\tR = a + (b - c) * d - e = %d\n", a + (b - c) * d - e);
	printf("\tR = (a + b) * c + d * e = %d\n", (a + b) * c + d * e);
	printf("\tR = (a + b) * (c / d) %% e = %d", (a + b) * (c / d) % e);
	return 0;
}
