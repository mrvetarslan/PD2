#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct person{
    int age;
    float weight;
    char name[30];
};

int main(int argc, char *argv[]) {
    struct person *ptr;
    int i,n;
    printf("Enter the number of persons: ");
    scanf("%d",&n);
    ptr=(struct person*)malloc(n*sizeof(struct person));
    for(i=0;i<n;i++){
        printf("Enter first name and age respectively: ");
        scanf("%s %d",(ptr+i)->name,&(ptr+i)->age);
    }
    printf("Displaying Information:\n");
    for(i=0;i<n;++i){
        printf("Name: %s\tAge: %d\n",(ptr+i)->name,(ptr+i)->age);
    }
	return 0;
}
