#include<stdlib.h>
#include<stdio.h>

int main(){
	int i;
	printf("Input an integer ");
	
	if(fscanf(stdin,"%d",&i))
		printf("The integer was : %i\n",i);
	else{
		fprintf(stderr,"Error reading an integet from stdin.\n");
		exit(1);	
	}
	return 0;
}

