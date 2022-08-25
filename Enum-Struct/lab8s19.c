#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct Complex{
    float real;
    float imag;
}complex;

void addNumbers(complex c1,complex c2,complex *result);

int main(int argc, char *argv[]) {
    complex c1,c2,result;
    printf("For first number,\n");
    printf("Enter real part: ");
    scanf("%f",&c1.imag);
    printf("Enter imaginary part: ");
    scanf("%f",&c1.imag);
    
    printf("For second number,\n");
    printf("Enter real part: ");
    scanf("%f",&c2.real);
    printf("Enter imaginary part: ");
    scanf("%f",&c2.imag);
    
    addNumbers(c1,c2,&result);
    printf("\nresult.real=%.1f\n",result.real);
    printf("result.imag=%.1f",result.imag);
	return 0;
}
void addNumbers(complex c1,complex c2,complex *result){
    result->real=c1.real+c2.real;
    result->real=c1.imag+c2.imag;
}
