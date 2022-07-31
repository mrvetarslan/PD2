#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int maxbul(int dizi[],int boyut){
    int max;
	if (boyut == 1)
		return dizi[0];
	else
		max = maxbul(dizi, boyut-1);
	if (max > dizi[boyut-1])
		return max;
	else
		return dizi[boyut-1];
}
int main(int argc, char *argv[]) {
    int dizi[6]={65,487,825,12,321,88};
    printf("En buyuk eleman: %d",maxbul(dizi,6));
	return 0;
}
