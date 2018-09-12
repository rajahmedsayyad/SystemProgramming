
#include<stdio.h>

int main(){
	FILE *stream;
	int i = 100;
	char c = 'C';
	float f = 1.234;
	
	stream = fopen("DUMMY.FIL","w+");
	
	fprintf(stream,"%d%c%f",i,c,f);

	fclose(stream);
	return 0;
}
