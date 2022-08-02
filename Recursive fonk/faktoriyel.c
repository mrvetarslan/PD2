#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int faktoriyel(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        return (n * faktoriyel(n-1));
    }
}
int main(int argc, char *argv[]) {
    int sayi;
    printf("Bir sayi girin: ");
    scanf("%d",&sayi);
    printf("Girdiginiz sayinin faktoriyeli: %d",faktoriyel(sayi));
	return 0;
}
