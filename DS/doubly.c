#include<stdio.h>
#include<stdlib.h>
int c, v;
struct node {
    int data;
    struct node* prev;
    struct node* next;
};
struct node *head = NULL,*nnode,*newnode, *temp, *f, *b;
struct node createnode()
{
                nnode = malloc(sizeof(struct node));
                printf("Enter the number: ");
                scanf("%d", &v);
                nnode->data = v;
                nnode->next = NULL;
                return *nnode;
}

int main() {
  
    

    do {
        printf("\n1.Insert at End\n2.Display\n3.Insert at Beginning\n4.Exit\nEnter your choice: ");
        scanf("%d", &c);

        switch(c) {
            case 1: {
                
                
                if(head == NULL) {
                    newnode->prev = NULL;
                    head = newnode;
                    temp = newnode;
                } else {
                    temp->next = newnode;
                    newnode->prev = temp;
                    temp = newnode;
                }
                break;
            }

            case 2: { // Display
                printf("\nList in order:\n");
                f = head;
                while(f != NULL) {
                    printf("%d\t", f->data);
                    f = f->next;
                }

                printf("\nList in reverse order:\n");
                b = temp;
                while(b != NULL) {
                    printf("%d\t", b->data);
                    b = b->prev;
                }
                break;
            }

            case 3: { 
               newnode=createnode();

                if(head != NULL)
                    head->prev = newnode;
                else
                    temp = newnode; 

                head = newnode;
                break;
            }

            case 4:
                printf("\nExiting...\n");
                break;

            default:
                printf("\nInvalid choice");
        }

    } while(c != 4);

    return 0;
}
