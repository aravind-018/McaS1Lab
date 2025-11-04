#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
struct node
    {
    int data;
    struct node *left, *right;
    };
struct node* createnode(int v){
    struct node* newnode=malloc(sizeof(struct node));
    newnode->data=v;
    newnode->right=newnode->left=NULL;
    return newnode;
}
struct node* insert(struct node *root,int v){
    if( root == NULL){
        return createnode(v);
    }
    else if(root->data>=v){
        root->left=insert(root->left,v);
    }
    else{
        root->right=insert(root->right,v);
    }
    return root;
}
struct node* FindMin(struct node *root) {
    if (root == NULL)
        return NULL;

    while (root->left != NULL)
        root = root->left;

    return root;
}

void inorder(struct node *root){
    struct node* temp=root;
   
    if(root!=NULL){
        inorder(temp->left);
        printf("%d,",temp->data);
        inorder(temp->right);
    }
}
void preorder(struct node *root){
    struct node* temp=root;
    
    if(root!=NULL){
       printf("%d,",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}
void postorder(struct node *root){
    struct node* temp=root;
   
    if(root!=NULL){
        postorder(temp->left);
        postorder(temp->right);
        printf("%d,",temp->data);
    }
}
bool search(struct node *root,int t){
    struct node* temp=root;
    if(temp==NULL){
        return false;
    }
    else if(t==temp->data)
        return true;
    else if(t>temp->data)
        search(temp->right,t);
    else
        search(temp->left,t);
}
    struct node* delete(struct  node* root, int del){
            if(root==NULL)
                return root;
            else if(del<root->data){
                root->left=delete(root->left,del);
            }
            else if(del>root->data){
                root->right=delete(root->right,del);
            }
            else{
                if(root->left==NULL && root->right==NULL){// case 1: no child
                    free(root);
                    root=NULL;
                }
                else if(root->left==NULL){//case 2: 1 children
                    struct node* temp=root;
                    root=root->right;
                    free(temp);
                }
                else if(root->right==NULL){
                    struct node* temp=root;
                    root=root->left;
                    free(temp);
                }
                else{//case 3: 2 children
                    struct node *temp =FindMin(root->right);
                    root->data=temp->data;
                    root->right=delete(root->right,temp->data);

                }
            }
         return root;
        }
int main(){
    struct node* root=NULL;
    int ch ,value,target,dele;
    bool res;
    do{
    printf("\n1.insert\n2.display\n3.search\n4.deletion\n5.exit\nenter your choice");
    scanf("%d",&ch);
    
    switch(ch){
        //insert
        case 1:
            printf("\nenter the value to insert");
            scanf("%d",&value);
            root=insert(root,value);
        break;
        //traversal
        case 2:
            printf("\ninorder traversal\n");
            inorder(root);
            printf("\npreorder traversal\n");
            preorder(root);
             printf("\npostorder traversal\n");
            postorder(root);
        break;
        //search
        case 3:
            printf("\nenter the value to search");
            scanf("%d",&target);
            res=search(root,target);
            if(res)
            printf("element found");
            else
            printf("element not found");
        break;
        case 4:
        //delete
       
        printf("enter the value to delete:");
        scanf("%d",&dele);
        delete(root,dele);
        printf("deleted successfully");
        break;
        case 5:
            printf("exited");
        break;
        default:
            printf("invalid choice");
            break;
    }
}while(ch!=5);
return 0;

}