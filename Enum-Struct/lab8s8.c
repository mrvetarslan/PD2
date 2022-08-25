#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

enum sanfoundry{
    c=0,
    d=10,
    h=20,
    s=3
}a;
int main(int argc, char *argv[]) {
    a=c;
    printf("Size of enum veriable = %d bytes",sizeof(a)); 
	return 0;
}
