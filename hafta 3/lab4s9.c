#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char f1(int b);
int main(int argc, char *argv[]) {
    char a;
    a=f1(10);
    printf("%c",a);
    
	return 0;
}
char f1(int b){
    printf("a");
    if(b<=8)
        return 'a';
    else{
        printf("a");
        f1(b--);
    }     
}
