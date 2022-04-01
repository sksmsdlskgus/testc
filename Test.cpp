#include <stdio.h>
main( ) {
	int i;
	float sum,sum1=0;
	float hap,hap1=0;
	
	for(i=8; i<50; i=i+2)
	{
	hap = hap+(i+2.0);
	sum = sum+hap; }
	
	for(i=2; i<48; i=i+2) {	
	hap1 = hap1+(i+2.0);
	sum1 = sum1+ hap1; 
	}

	
	printf("result = %f ", sum/sum1);
}
