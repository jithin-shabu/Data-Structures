// write a menu driven c program to implement linear queue operations using array


#include<stdio.h>
void main(){
    int Q[50],item,n,ch,i,front=-1,rear=-1;
    printf("Enter the No of elements\n");
    scanf("%d",&n);
    while(1){
        printf("MENU\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\nPress Any other Value to Exit\n");
        printf("Enter Choice\n");
        scanf("%d",&ch);
        if(ch==1){
            if(rear==n-1){
                printf("Queue is full\n");
            }
            else{
                rear=rear+1;
                printf("Enter the Element\n");
                scanf("%d",&Q[rear]);
                
            }
        }
        else if(ch==2){
            if(front==rear){
                printf("Queue is empty\n");
            }
            else{
                front=front+1;
                printf("Removed %d\n",Q[front]);

            }

        }
        else if(ch==3){
            if(front==rear){
                printf("Queue is empty\n");
            }
            else{

                i=front+1;
                while(i<=rear){
                    printf("%d\n",Q[i]);
                    i++;
                }

            }
        }
        else{
            return;
        }
            
        
    }

}