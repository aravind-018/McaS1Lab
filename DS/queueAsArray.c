#include<stdio.h>
#include<stdlib.h>
int main(){
    int q[5],ch;
   
    int f=-1,r=-1;
    do{
    printf("\n1.insert\n2.delete\n3.display\n4.exit\nchoose one option:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:{
        if(r==4){
            printf("overflow");
        }
        else{
            int v;
            printf("enter the value to insert:");
            scanf("%d",&v);
            if(f=-1)
            f++;
            r++;
            q[r]=v;
            
            
        }
        break;
    }
    case 2:
    {
         if(f==-1||f>r){
            printf("underflow");
        }
        else{
            int temp=q[f];
            f++;
            
            printf("the deleted value is %d",temp);
            
        }
        break;
    }
    case 3:
    {
         if(f==-1&&f>r){
            printf("underflow");
        }
        else{
            printf("values in queue\n");
            for(int i=f;i<=r;i++){
                printf("%d\t",q[i]);
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