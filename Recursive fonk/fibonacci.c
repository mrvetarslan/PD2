#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fibonacci(int n){
    if (n == 0 || n == 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(int argc, char *argv[]){
    int i, sayi;
    printf("How many fibonacci numbers?:");
    scanf("%d", &sayi);
    for (i = 1; i <= sayi ; i++){
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}

