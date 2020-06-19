#include<stdio.h>

//A computer program receives an unsigned integer and displays submultiples of the entered value. 
//The most important difference between signed and unsigned is the signed int, which means normal int can also hold negative values, but unsigned int can only hold 0 and positive numbers.

int main(){
	
	unsigned int n;
	int begin,end,j;
	
	//%u is aformat specifiers for unsigned int.
	printf("Please enter an integer:");
	scanf("%u",&n);

        printf("Please enter range of submultiples:");
        scanf("%u %u",&begin,&end);
	
        for(j=begin;j<=end;j++){
    	    if(n%j==0){
    		printf("%d is submultiple of the entered value.\n",j);
		}
	}
	
	
	return 0;
}
