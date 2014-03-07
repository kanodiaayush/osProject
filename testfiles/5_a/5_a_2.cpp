#include <cstdio>
#include <iostream>
using namespace std;


int main(){
	cout<<"Setting the instruction slice to 20 from default value of 10.\n";
	if(syscall(401,20) == 401){
		cout<<"Instruction slice modified"<<endl;
	}
	int i = 5000;
	while(i--){
		cout<<"Program #2: iteration number "<<5000-i<<endl;
	}
	return 0;
}