#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student{
    char name[50];
    int age;
};

void display(struct student s);

int main(int argc, char *argv[]) {
    struct student s1;
    printf("Enter name: ");
    scanf("%[^\n]%*c",s1.name);
    printf("Enter age: ");
    scanf("%d",&s1.age);
    
    display(s1);
    
	return 0;
}
void display(struct student s){
    printf("\nDisplaying information\n");
    printf("Name: %s",s.name);
    printf("\nAge: %d",s.age);
}
