#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int recursive_sum_of_digits(int n){
    if(n == 0)
        return 0;
    return n % 10 + recursive_sum_of_digits(n/10);
}
void main(){
    int n = 1201;
    int ans = recursive_sum_of_digits(n);
    printf("%d",ans);
}
