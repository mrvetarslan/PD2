#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float square(int r){
    float conclusion;
    conclusion = pi*r*r;
    return conclusion;
}


int main(int argc, char *argv[]) {
    int yaricap;
    float sonuc;
    printf("Yaricapi girin: ");
    scanf("%d",&yaricap);
    sonuc=square(yaricap);
    printf("Sonuc: %.2f",sonuc);
    
	return 0;
}
