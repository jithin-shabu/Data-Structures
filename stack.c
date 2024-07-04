// write a menu driven c program to implement stack operations using array

#include<stdio.h>
void main(){
    int stack[50],n,ch,top=-1,item,i;
    printf("Enter the no elements in the stack\n");
    scanf("%d",&n);
    while(1){
        printf("MENU\n");
        printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
        printf("Enter Choice\n");
        scanf("%d",&ch);
        if(ch==1){
            if(top==n-1){
                printf("Stack is full\n");
            }
            else{
                top=top+1;
                printf("Enter the element\n");
                scanf("%d",&stack[top]);
            }
        }
        else if (ch==2){
            if(top==-1){
                printf("Stack is empty\n");
            }
            else{
                item=stack[top];
                printf("Popped %d\n",item);
                top=top-1;
            }
        }
        else if (ch==3){
            if(top==-1){
                printf("Stack is empty\n");
            }
            else{
                item=stack[top];
                printf(" %d\n",item);
            }
        }
        else if (ch==4){
            if(top==-1){
                printf("Stack is empty\n");
            }
            else{
                i=top;
                while(i>=0){
                    printf("%d\n",stack[i]);
                    i--;
                }
            }

        }

        else{
            return;

    }
    }
    
}