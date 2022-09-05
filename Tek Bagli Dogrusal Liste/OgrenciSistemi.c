#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct student{
    int no;
    char name[40];
    int age;                 //Listedeki bir dugumun yapisini su sekilde oldugunu dusunelim
    struct student *next;
};
typedef struct student node;
node *head,*newNode;

node* createList(){
    int n,k;
    node *head,*p;
    printf("Listede kac ogrenci var?");
    scanf("%d",&n);
    for(k=0;k<n;k++){
        if(k==0){
            head=(node*)malloc(sizeof(node));    //Dogrusal liste olusturma
            p=p->next;
        }
        printf("Enter %d. student number: ",k+1);
        scanf("%d",&p->no);
        printf("Enter %d. student name: ",k+1);
        scanf("%s",p->name);
        printf("Enter %d. student age: ",k+1);
        scanf("%d",&p->age);
        
    }
    p->next=NULL;
    return head;
}
void traverseList(node* head){    //Dogrusal listede dolasma
    int counter=1;
    node *p;
    p=head;
    while(p != NULL){
        printf("%d- %d %s %d \n",counter,p->no,p->name,p->age);
        p=p->next;
        counter++;
    }
}

node* addNode(node* head){
    int stdNo;
    node *p,*q;
    node *newNode=(node*)malloc(sizeof(node));
    printf("Enter new student number: ");
    scanf("%d",&newNode->no);
    printf("Enter new student name: ");
    scanf("%s",newNode->name);
    printf("Enter new student age: ");
    scanf("%d",&newNode->age);
    printf("Once yeni kaydin eklenecegi std num girin: \n");
    printf("Listenin sonuna eklemek icin 0 a basin");
    scanf("%d",&stdNo);
    p=head;
    if(p->no == stdNo){
        newNode->next=p;
        head=newNode;
    }
    else{
        while(p->next != NULL && p->no != stdNo){
            q=p;
            p=p->next;
        }
        if(p->no == stdNo){
            q->next=newNode;
            newNode->next=p;
        }
        else if(p->next == NULL){
            p->next=newNode;
            newNode->next=NULL;
        }
    }
    return head;
    
}

node* deleteNode(node *head){
    int stdNo;
    node *p,*q;
    printf("Enter student number that will be deleted?");
    scanf("%d",&stdNo);
    p=head;
    if(p->no == stdNo){
        head=p->next;
        free(p);
    }
    p=head;
    if(p->no == stdNo){
        head=p->next;
        free(p);
    }
    else{
        while(p->next != NULL && p->no != stdNo){
            q=p;
            p=p->next;
        }
        if(p->no == stdNo){
            q->next=p->next;
            free(p);
        }
        else if(p->next == NULL){
            printf("No node found to delete");
        }
    }
    return head;
}
int main(int argc, char *argv[]) {
    node *head;
    int selection=0;
    printf("1-Liste olustur \n 2-Traverse List \n 3-Dugum ekle \n 4-Dugum sil \n 5-Cikis");
    while(1){
        printf("Selection [1-5]?");
        scanf("%d",&selection);
        switch(selection){
            case 1:
                head=createList();
                printf("Adres: %x\n",head);
                traverseList(head);
                break;
            
            case 2:
                traverseList(head);
                break;
                
            case 3:
                head=addNode(head);
                traverseList(head);
                break;
                
            case 4:
                head=deleteNode(head);
                traverseList(head);
                break;
                
            case 5:
                exit(0);
            
        }
    }
	return 0;
}

