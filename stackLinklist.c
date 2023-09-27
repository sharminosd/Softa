#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node*top=NULL;
void push(int val)
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->data=val;
    newnode->next=top;
    top=newnode;
}
void peek()
{
    if(top==NULL)
    {
        printf("top is null");
    }
    else
    {
        printf("Top=%d\n",top->data);
    }
}
void pop()
{
    node *temp=top;
    if(temp==NULL)
    {
        printf("Underflow");
    }
    else
    {
        printf("pop=%d\n",temp->data);
        top=top->next;
        free(temp);
    }


}
void display()
{
    node *temp;
    temp=top;
    if(top==NULL)
    {
        printf("Underflow");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    push(2);
    push(3);
    push(4);
    display();
    peek();
    pop();
    peek();
    display();
    return 0;
}
