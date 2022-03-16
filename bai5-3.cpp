#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float cm;
	float inch;
	float feet;
	
	
	
	printf("Nhap so centimeters muon quy doi : ");
	scanf("%f", &cm);
	inch = cm / 2.54;
	feet = inch / 12;
	printf("\n %f (cm) = %f (inch) = %f (feet)", cm,inch,feet);
	return 0;
}
