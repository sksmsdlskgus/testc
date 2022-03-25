#include <stdio.h>
main( ) {
  int i;
  float sum=0;
  for(i=2; i<11; i=i++)
    
	 sum=sum+(i+3.0)/(i*(i++));
	   
	printf(" sum = %f ",sum);
}
