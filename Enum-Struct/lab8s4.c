#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

enum example {a=1,b,c};
enum example example1=2;
enum example answer(){
    return example1;
}
int main(int argc, char *argv[]) {
    (answer() == a)? printf("yes"): printf("no");
	return 0;
}
    
