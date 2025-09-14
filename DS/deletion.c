#include<stdio.h>
#include<stdlib.h>
int main(){
    int c,v;
    struct node{
        int data;
        struct node* link;
    };
    struct node* head,*newnode,*temp,*prev;
   newnode=malloc(sizeof(struct node));
   head=0;
   do{
    printf("1.insert\n2.display\n3.delete\n4.exit\nenter your choice:");
    scanf("%d",&c);
    switch(c){
        case 1:
            
            printf("\nenter the value:");
            scanf("%d",&v);
            newnode=malloc(sizeof(struct node));
            if(head==0){
                newnode->data=v;
                newnode->link=0;
                head=newnode;
                temp=head;
            }
            else{
                newnode->data=v;
                newnode->link=0;
                temp->link=newnode;
                temp=newnode;
            }
            break;
        case 2:
            temp=head;
            if(temp==0){
                printf("\nunderflow\n");
            }
            else{
            while(temp!=0){
            printf("%d->",temp->data);
            temp=temp->link;
            }
            printf("\n");
        }
            break;
        case 3:
            if(head==0){
                printf("underflow");
            }
            else if(head->link==0){
                head=0;
            }
            else{
            temp=head;
            while(temp->link!=0){
                prev=temp;
                temp=temp->link;
            }
            prev->link=0;
            free(temp);
            }
            
            
        break;
        case 4:
            printf("exited the program");
            break;
        default:
             printf("invalid choice");
    }
        


   }while(c!=4);
    
}

