#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
enum day {sunday=1,tuesday,wednesday,thursday,friday,saturday}; 
int main(int argc, char *argv[]) {
    enum day d=thursday;
    printf("The day number stored in d is %d",d);
    
	return 0;
}
