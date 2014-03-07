#include <stdio.h>
#include <stdlib.h>


int main(){
	int callNo = 403;
	int numBytes = 6;
	int blockNum = 179;
	int offset = 8187;
	
	printf("User3: Making sys call read_disk\n");
	char * chr = malloc(numBytes*sizeof(char));
	syscall(callNo-1,6, chr, blockNum, offset);
	printf("User3: Bytes read:  %s \n", chr);
	return 0;
}
