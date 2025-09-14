#include<stdio.h>
#include<stdlib.h>
int main(){
    int s[5],ch;
   
    int top=-1;
    do{
    printf("1.push\n2.pop\n3.display\n4.exit\nchoose one option:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:{
        if(top==4){
            printf("overflow");
        }
        else{
            int v;
            printf("enter the value to insert:");
            scanf("%d",&v);
            top++;
            s[top]=v;
            
        }
        break;
    }
    case 2:
    {
         if(top==-1){
            printf("underflow");
        }
        else{
            int temp=s[top];
            top--;
            printf("the deleted value is %d",temp);
            
        }
        break;
    }
    case 3:
    {
         if(top==-1){
            printf("underflow");
        }
        else{
            printf("values in stack\n");
            for(int i=0;i<=top;i++){
                printf("%d\t",s[i]);
             }
           
        }
        break;
    }
    case 4:{
        printf("exiting the program....");
        break;
    }
        
    default:
    printf("invalid");
    break;
    }
}while(ch!=4);
   
}