#include <cstdio>
#include <iostream>
using namespace std;


int main(){
	cout<<"Setting the instruction slice to 8 from default value of 10.\n";
	if(syscall(401,8) == 401){
		cout<<"Instruction slice modified"<<endl;
	}
	int i = 5000;
	while(i--){
		cout<<"Program #1: iteration number "<<5000-i<<endl;
	}
	return 0;
}