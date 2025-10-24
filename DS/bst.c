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
int main(){
    struct node* root=NULL;
    int ch ,value,target;
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
            

        break;
        case 5:
            printf("exited");
        break;
        default:
            printf("invalid choice");
            break;
    }
}while(ch!=4);
return 0;

}