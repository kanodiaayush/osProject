#include <stdio.h>
#include <stdlib.h>


int main(){
	printf("Writing the text 'TheQuickBrownFoxJumpsOverTheLazyDog' to the disk\n");
	printf("User1: Making sys call write_disk\n");
	int callNo = 403;
	int numBytes = 36;
	char * ch = malloc(numBytes*sizeof(char));
	ch = "TheQuickBrownFoxJumpsOverTheLazyDog";
	int blockNum = 30;
	int offset = 506;
	syscall(callNo,numBytes, ch, blockNum, offset);
	
	printf("User1: Making sys call read_disk\n");
	char * chr = malloc(numBytes*sizeof(char));
	syscall(callNo-1,36, chr, blockNum, offset);
	printf("Text read from disk:  %s \n", chr);
	return 0;
}
