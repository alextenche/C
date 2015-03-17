#include <stdio.h>
#include <stdlib.h>

//Function prototypes
void readEntireFile(void);
void readUntilMarker(char marker);
void writeToFile(void);

int main(void) {

	readEntireFile();
	printf("\n--------------------------------\n");
	readUntilMarker('m');
	writeToFile();

	return EXIT_SUCCESS;
}

void readEntireFile(){
	int ch;
	FILE *fp;  // pointer to a file type
	fp = fopen("C:/Users/Alexandru/workspace/Working/message", "r"); // Change to match your path
	ch = getc(fp);
	while (ch != EOF){  // keep looping until End Of File
		putchar(ch);    // print the characters read
		ch = getc(fp);
	}
	fclose(fp);
}

void readUntilMarker(char marker){
	int ch;
	FILE *fp;  // pointer to a file type
	fp = fopen("C:/Users/Alexandru/workspace/Working/message", "r"); // Change to match your path
	ch = getc(fp);
	while (ch != marker){  // keep looping until End Of File
		putchar(ch);       // print the characters read
		ch = getc(fp);
	}
	fclose(fp);
}

void writeToFile(){
	FILE *fp;  // pointer to a file type
	fp = fopen("C:/Users/Alexandru/workspace/Working/message2", "w"); // Change to match your path
	char name[10] = "Roger";
	fprintf(fp,"This message is for %s\n",name);
	fclose(fp);
}
