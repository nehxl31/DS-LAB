#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *start=NULL;
void push();
void pop();
void display();
int main()
{
   int val,option;
    do
    {
        printf("\nNehal 1BM22CS176\nEnter the number to perform following operations\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:display();
            break;
        }
    }
    while(option!=4);
    return 0;
}
void push()
{
    struct node *new_node;
    int num;
    printf("Enter the data\n");
    scanf("%d",&num);
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=num;
    new_node->next=start;
    start=new_node;
}
void pop()
{
  struct node *ptr;
  ptr=start;
  if(start==NULL)
  {
  printf("Stack is empty\n");
  exit(0);
  }
  else
  {
    ptr=start;
    start=ptr->next;
    printf("\nElement popped from the stack is: %d\n",ptr->data);
    free(ptr);
  }
 
}
void display()
{
 
    struct node *ptr;
    ptr=start;
    while(ptr!=NULL)
    {
        printf("\t%d",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
