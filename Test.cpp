#include <stdio.h>
main( ) {
	int i;
	float sum=0;
	float hap=0;
	for(i=8; i<50; i=i+2)
	{
	hap = hap+(i+2.0);
	sum = sum+ (float)i/hap; }
	
	printf("sum = %f ", sum);
}

