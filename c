#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5
int S[MAX_SIZE],top=-1;
int main()
{
    int ch,ele;
    while(1)
    {
        printf("enter 1 for push 2 for pop 3 for display 4 for exit \n");
        scanf("%d",&ch);
         switch(ch)
         {
             case 1 :
               push();
               break;
             case 2 :
               ele=pop();
               printf("popped element is %d \n",ele);
               top--;
               break;
             case 3 :
                display();
                break;
             case 4 :
                exit(1);
             default :
                printf("invalid input");
                break;
         }
    }
    return 0;
}
void push()
{
    int newele;
    if (top==MAX_SIZE-1)
        printf("stack overflow");
    printf("enter the new element \n");
    scanf("%d",&newele);
    ++top;
    S[top]=newele;
}
int pop()
{

    if (top==-1)
    {
        printf("stack underflow\n");
 }   return(S[top]);
}
void display()
{
     int i;
     if (top==-1)
   printf("under flow \n");
     for(i=top;i>=0;i--)
     printf("%d\n",S[i]);


}
