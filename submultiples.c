#include<stdio.h>

//A computer program receives an unsigned integer and displays submultiples of the entered value. 
//The most important difference between signed and unsigned is the signed int, which means normal int can also hold negative values, but unsigned int can only hold 0 and positive numbers.

int main(){
	
	unsigned int n;
	int i,j;
	int numbers[8];
	
	printf("Please enter an integer:");
	scanf("%d",&n);

    //I created an array with numbers from 2 to 9.
    for(i=2;i<10;i++){
    	numbers[i-2]=i;
	}
	
	/*for(j=0;j<8;j++){
		printf("%d ",numbers[j]);
	}*/
	
    for(j=0;j<8;j++){
    	if(n%numbers[j]==0){
    		printf("%d is submultiple of the entered value.\n",numbers[j]);
		}
	}
	
	
	return 0;
}
