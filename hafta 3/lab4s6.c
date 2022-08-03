#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void my_recursive_function(int n){
    if(n == 0)
        return;
    printf("%d ",n);
    my_recursive_function(n-1);
}
void main(){
    my_recursive_function(7);
}
