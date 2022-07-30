#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float kitleIndeks(float kilo,float boy){
    float vucutkitleIndex = kilo/(boy*boy);
    return vucutkitleIndex;
}

int main(int argc, char *argv[]) {
    float kilo,boy;
    printf("Kilonuzu girin: ");
    scanf("%f",&kilo);
    printf("Boyunuzu girin: ");
    scanf("%f",&boy);
    
    kitleIndeks(kilo,boy);
    printf("Vucut kitle Indexiniz: %.2f",kitleIndeks(kilo,boy));
    
    
	return 0;
}
