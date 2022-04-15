#include <stdio.h>
main(){


char hh[] = "We are the champion";
char Large[80];
char Small[80];
  int i;
    int c=0;
    printf("%s\n", hh); //we are the champion
    
    for(i=0; hh[i]!='\0';i++){ 
     Large[i]=hh[i];
	if (Large[i]>='A'&& Large[i]<='Z')
	    printf("%c",Large[i]);
	    else if (Large[i]>='a'&& Large[i]<='z')
	     printf("%c",Large[i] - ('a'-'A'));
	     
		 else 
	     printf("%c",Large[i]);
	  }   //WE ARE THE CHAMPION
       
	  
	  
	    for(i=0;hh[i]!='\0'; i++) 
	    	Small[i]=hh[i];
		 if (Small[i]>='a'&& Small[i]<='z')
	     
		
        printf("\n%s\n",Small);	 //we are the champion

}
