#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fun(int n){
    if (n == 0)
        return;
    fun(n/2);
    printf("%d ", n%2);
}
int main(int argc, char *argv[]) {
    fun(25);
	return 0;
}
