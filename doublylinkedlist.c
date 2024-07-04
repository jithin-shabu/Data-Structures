#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next, *prev;
};

struct node *p,*head,*ptr,*tail;
int item;

void main(){
    int ch;
    while(1){
        printf("Menu\n");
        printf("1.Insert from beginning\n");
        printf("2.Insert from End\n");
        printf("3.Insert after a node\n");
        printf("4.Insert before a node\n");
        printf("5.Delete from beginning\n");
        printf("6.Delete from End\n");
        printf("7.Delete a specific node\n");
        printf("8.Display Forwards\n");
        printf("9.Display Backwards\n");
        printf("Press Any Other Key To Exit\n");
        printf("Enter Choice\n");
        scanf("%d",&ch);

        if(ch==1){
            insertfrombeginning();
        }
        
    }
}

void insertfrombeginning(){
    p=(struct node *)malloc(sizeof(struct node));
    printf("Enter Data\n");
    scanf("%d",&p->data);
    if(head==NULL){
        p->next=NULL;
        p->prev=NULL;
        head=p;
        tail=p;
    }
    else{
        p->next=head;
        p->prev=NULL;
        head->prev=p;
        head=p;
    }
    
}

void insertatend(){
    p=(struct node *)malloc(sizeof(struct node));
    printf("Enter Data\n");
    scanf("%d",&p->data);
    if(head==NULL){
        p->next=NULL;
        p->prev=NULL;
        head=p;
        tail=p;
    }
    else{
        p->next=NULL;
        p->prev=tail;
        tail->next=p;
        tail=p;
    }

}

void insertafternode(){
    if(head==NULL){
        printf("List is empty\n");
    }
    else{
        ptr=head;
        p=(struct node *)malloc(sizeof(struct node));
        printf("Enter Data\n");
        scanf("%d",&p->data);
        printf("Enter node after which insertion should take place\n");
        scanf("%d",&item);
        while(ptr->data != item){
            if(ptr->data==NULL){
                printf("Node does not exist\n");
                return;
            }
            ptr=ptr->next;
        }

        if(head==tail){
            ptr->next=p;
            p->prev=ptr;
            p->next=NULL;
            tail=p;
        }
        else if(ptr==tail){
            p->next=NULL;
            ptr->next=p;
            p->prev=ptr;
            tail=p;
        }
        else{
            ptr->next=p;
            p->prev=ptr;
            ptr->next->prev=p;
            p->next=ptr->next;
        }
    }
    
}


void insertbeforenode(){
    if(head==NULL){
        printf("List is empty\n");
    }
    else{
        ptr=head;
        p=(struct node *)malloc(sizeof(struct node));
        printf("Enter Data\n");
        scanf("%d",&p->data);
        printf("Enter node before which insertion should take place\n");
        scanf("%d",&item);
        while(ptr->data != item){
            if(ptr->data==NULL){
                printf("Node does not exist\n");
                return;
            }
            ptr=ptr->next;
        }

        if(head==tail){
            p->next=head;
            head->prev=p;
            p->prev=NULL;
            head=p;
        }
        else if(ptr=head){
            p->next=ptr;
            ptr->prev=p;
            head=p;
        }

        else{
            ptr->prev=p;
            p->next=ptr;
            ptr->prev->next=p;
            p->prev=ptr->prev;
        }


    }
}