#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int f(int,int*,int**);
int main(int argc, char *argv[]) {
    int c,*b,**a;
    c=4;
    b=&c;
    a=&b;
    printf("%d",f(c,b,a));
    
	return 0;
}
int f(int x,int *py,int **ppz){
    **ppz+=1;
    x=*py * **ppz;
    *py *=2;
    x*=*py+3;
    return (x+*py+**ppz);
}

