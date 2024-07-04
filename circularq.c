// write a menu driven c program to implement circular queue using arrays & perform the following operations
// insert, delete, is empty, is full, display

#include<stdio.h>
void main(){
    int Q[50],item,n,ch,i,front=0,rear=0;
    printf("Enter the No of elements\n");
    scanf("%d",&n);
    while(1){
        printf("MENU\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\nPress Any other Value to Exit\n");
        printf("Enter Choice\n");
        scanf("%d",&ch);
        if(ch==1){
            if((rear+1)%n==front){
                printf("Queue is full\n");
            }
            else{
                rear=(rear+1)%n;
                printf("Enter the Element\n");
                scanf("%d",&Q[rear]);
                
            }
        }
        else if(ch==2){
            if(front==rear){
                printf("Queue is empty\n");
            }
            else{
                front=(front+1)%n;
                printf("Removed %d\n",Q[front]);

            }

        }
        else if(ch==3){
            if(front==rear){
                printf("Queue is empty\n");
            }
            else{

                i=(front+1)%n;
                while(i!=rear){
                    printf("%d\n",Q[i]);
                    i=(i+1)%n;
                }

            }
        }
        else{
            return;
        }
            
        
    }

}