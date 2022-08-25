#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

enum State {WORKING = 0, FAILED, FREEZED};
enum State currState=2;
enum State FindState(){
    return currState;
}
int main(int argc, char *argv[]) {
    (FindState() == WORKING)? 
    printf("WORKING"): 
    printf("NOT WORKING");
	return 0;
}
