#include<stdio.h>
#include<stdlib.h>
int main(){
    int c,v;
    struct node{
        int data;
        struct node* link;
    };
    struct node* head,*newnode,*temp;
   newnode=malloc(sizeof(struct node));
   head=0;
   do{
    printf("1.insert\n2.display\n3.exit\nenter your choice:");
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
               
                temp->link=newnode;
                temp=newnode;
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
            printf("exited the program");
            break;
        default:
             printf("invalid choice");
    }
        


   }while(c!=3);
    
}

