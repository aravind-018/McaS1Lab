#include<stdio.h>
#include<stdlib.h>
int main(){
    int c,v,pos,count=0;
    struct node{
        int data;
        struct node* link;
    };
    struct node* head,*newnode,*temp;
   newnode=malloc(sizeof(struct node));
   head=0;
   do{
    printf("1.insert at begining\n2.display\n3.middle\n4.exit\nenter your choice:");
    scanf("%d",&c);
    switch(c){
        case 1:
            
            printf("\nenter the value:");
             scanf("%d",&v);
            newnode=malloc(sizeof(struct node));
             newnode->data=v;
                newnode->link=0;
            if(head==0){
               
                head=newnode;
                temp=head;
            }
            else{
                newnode->link=head;
                head=newnode;
            }
            break;
        case 2:
            temp=head;
            while(temp!=0){
            printf("%d->",temp->data);
            temp=temp->link;
            }
            printf("\n");
            break;
        case 3:
            
            newnode=malloc(sizeof(struct node));
            printf("enter the position to add ");
            scanf("%d",&pos);
            printf("enter the value ");
            scanf("%d",&v);
            newnode->data=v;
            newnode->link=0;
            temp=head;
            
            while(count!=pos-2){
                temp=temp->link;
                count++;
            }
            newnode->link=temp->link;
            temp->link=newnode;
            break;
        case 4:
            printf("exited the program");
            break;
        default:
             printf("invalid choice");
    }
        


   }while(c!=4);
    
}

