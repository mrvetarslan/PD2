#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
int main(int argc, char *argv[]) {
    struct Books Book1;
    struct Books Book2;
    
    strcpy(Book1.title,"C Programming");
    strcpy(Book1.author,"Nuha Ali");
    strcpy(Book1.subject,"C Programming Tutorial");
    Book1.book_id=6495407;
    
    strcpy(Book1.title,"Telecom Billing");
    strcpy(Book1.author,"Zara Ali");
    strcpy(Book1.subject,"Telecom Billing Tutorial");
    Book1.book_id=6495700;
    
    printf("Book 1 title: %s\n",Book1.title);
    printf("Book 1 author: %s\n",Book1.author);
    printf("Book 1 subject: %s\n",Book1.subject);
    printf("Book 1 book_id: %d\n",Book1.book_id);
    
    printf("Book 2 title: %s\n",Book1.title);
    printf("Book 2 author: %s\n",Book1.author);
    printf("Book 2 subject: %s\n",Book1.subject);
    printf("Book 2 book_id: %d\n",Book1.book_id);
    
	return 0;
}
