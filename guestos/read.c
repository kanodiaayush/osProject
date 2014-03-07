#include <stdio.h>
#include <stdlib.h>


int main(){
	int callNo = 403;
	int numBytes = 6;
	int blockNum = 80;
	int offset = 503;
	
	printf("User2: Making sys call read_disk\n");
	char * chr = malloc(numBytes*sizeof(char));
	syscall(callNo-1,6, chr, blockNum, offset);
	printf("User2: Bytes read:  %s \n", chr);

	printf("User2: Making another sys call read_disk\n");
	chr = malloc(numBytes*sizeof(char));
	syscall(callNo-1,6, chr, blockNum, offset);
	printf("User2: Bytes read again:  %s \n", chr);
	return 0;
}
