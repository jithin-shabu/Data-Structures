#include<stdio.h>

void main(){
    int a[50],n,i,j,ch,min_index,temp;
    printf("Enter size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter Element\n");
        scanf("%d",&a[i]);
    }
    printf("Unsorted Array : ");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    while(1){
    printf("MENU\n");
    printf("1.Selection Sort\n2.Insertion Sort\nEnter your choice\n");
    scanf("%d",&ch);
    if(ch==1){
        for(i=0;i<n-1;i++){
            min_index=i;
            for(j=i+1;j<n;j++){
                if(a[j]<a[min_index]){
                    min_index=j;
                }
            }
            temp=a[min_index];
            a[min_index]=a[i];
            a[i]=temp;

            for(j=0;j<n;j++){
                printf("%d\t",a[j]);
            }
            printf("\n");


        }

    }

    else if(ch==2){
        for(i=1;i<n;i++){
            temp=a[i];
            j=i-1;

            while(j>=0 && temp<=a[j]){
                a[j]=a[j+1];
            }
            a[j+1]=temp;

            
            for(j=0;j<n;j++){
                printf("%d\t",a[j]);
            }
            printf("\n");
        }
    }
    else{
        return;
    }

    }



}

