#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

enum sanfoundry{
    a=1,b
};
enum sanfoundry1{
    c,d
};
int main(int argc, char *argv[]) {
    enum sanfoundry1 s1=c;
    enum sanfoundry1 s=a;
    enum sanfoundry1 s2=d;
    printf("%d ",s);
    printf("%d ",s1);
    printf("%d ",s2);
	return 0;
}
