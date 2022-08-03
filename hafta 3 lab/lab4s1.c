#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fun(int n, int a, int b){
    if (n >= 10)
        return;
    fun(n + 2, a, b + n);
    printf("%d %d %d\n", n, a, b); 
}
int main(int argc, char *argv[]) {
    int n=0,a=5,b=7;
    fun(n,a,b);
	return 0;
}
