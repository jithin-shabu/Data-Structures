#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *p,*head,*tail,*ptr,*prev;
int item;


void main(){
    head=NULL;
    int ch;
    while(1){
        printf("Menu\n");
        printf("1.Insert from beginning\n");
        printf("2.Insert from End\n");
        printf("3.Insert after a node\n");
        printf("4.Delete from beginning\n");
        printf("5.Delete from End\n");
        printf("6.Delete a specific node\n");
        printf("7.Display\n");
        printf("Press Any Other Key To Exit\n");
        printf("Enter Choice\n");
        scanf("%d",&ch);

        if(ch==1){

            insertfrombeginning();

        }

        else if(ch==2){

            insertfromend();
        }

        else if(ch==3){
            insertafternode();
        }

        else if(ch==4){
            deletefrombeginning();
        }
        else if(ch==5){
            deletefromend();
        }

        else if (ch==6){
            deletenode();
        }

        else if(ch==7){
            display();
        }

        else{

            return;
        }
    
    }


}

void insertfrombeginning(){

    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element\n");
    scanf("%d",&p->data);
    if(head==NULL){
        p->next=NULL;
        head=p;
        tail=p;
    }

    else{
        p->next=head;
        head=p;
    }
}

void insertfromend(){
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Element\n");
    scanf("%d",&p->data);
    p->next=NULL;
    if(head==NULL){
        head=p;
        tail=p;
    }
    else{
        tail->next=p;
        tail=p;
    }
}

void insertafternode(){
    if(head==NULL){
        printf("Empty List\n");
    }
    else{
        
        p=(struct node*)malloc(sizeof(struct node));
        printf("Enter the Element\n");
        scanf("%d",&p->data);
        p->next=NULL;
        ptr=head;
        printf("Enter the node after which data is to be inserted\n");
        scanf("%d",&item);
        
        while(ptr->data != item){
            if(ptr->next==NULL){
                printf("Node Doesn't Exist\n");
                return;

            }
            else{
                ptr=ptr->next;
                
            }
        }
        p->next=ptr->next;
        ptr->next=p;
        
    }
    if(ptr==tail){
        tail=p;
    }



}

void deletefrombeginning(){
    if(head==NULL){
        printf("Linked List empty\n");
        return;
    }
    else{
        ptr=head;
        head=head->next;
        free(ptr);
    }
}

void deletefromend(){
    if(head==NULL){
        printf("Linked List empty\n");
        return;
    }
    else{
        ptr=head;
        while(ptr->next != NULL){
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
        tail=prev;
        free(ptr);

    }
}

void deletenode(){
    if(head==NULL){
        printf("Linked List Empty\n");
        
    }
    else{
        printf("Enter the data to be removed\n");
        scanf("%d",&item);
        ptr=head;
        while(ptr->data != item){
            if (ptr->next==NULL){
                printf("Node Doesn't Exist\n");
                return;
            }
            prev=ptr;
            ptr=ptr->next;

        }
        if (ptr==head){
        head==NULL;
        }

        prev->next=ptr->next;

        if(prev->next==NULL){
            tail=prev;
        }
    }
    free(ptr);    

        
}

void display(){

    ptr=head;
    printf("Linked List : ");
    while(ptr != NULL){

        
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}


