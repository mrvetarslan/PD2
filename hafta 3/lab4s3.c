#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int fun(int n){
    if (n == 4)
        return n;
    else 
        return 2*fun(n+1);
}
 int main(){
    printf("%d ", fun(2));
    
    return 0;
}                       // Cikti 16 olacak --> 8 + 6 + 2 = 16

