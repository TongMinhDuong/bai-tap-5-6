#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int s, m  = 3, n = 5, r,t;
	float x = 3.0,y;
	
	printf(" Khi x = 3.0 , m = 3 , n = 5 thi :");
	printf("\nGia tri cua t = n / m la %d", n / m);
	printf("\nGia tri cua r = n%%m la %d", n%m);
	printf("\nGia tri cua y = n / m la %f", n/m);
	printf("\nGia tri cua t = x * y - m / 2 la %d", x*y-n/2);
	printf("\nGia tri cua x = x * 2.0 la %f", x * 2.0);
	printf("\nGia tri cua s = ( m + n ) / r la %d", ( m + n ) / r);
	printf("\nGia tri cua y = --n la %f", --n);
   return 0;
}
