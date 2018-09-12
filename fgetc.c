#include<string.h>
#include<stdio.h>

int main(){
	FILE *stream;
	
	char string[] = "\n This is a Test";
	char ch;
	
	stream = fopen("DUMMY.FIL","w+");
	
	fwrite(string,strlen(string),1,stream);
	
	fseek(stream,0,SEEK_SET);
	do{
		ch= fgetc(stream);
		putchar(ch);
	}while(ch!=EOF);
	
		
	
	fclose(stream);
	return 0;
}
