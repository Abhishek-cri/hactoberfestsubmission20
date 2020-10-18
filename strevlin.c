#include<stdio.h>
#include<stdlib.h>
struct stack
{
 char data [10];
 struct stack *next;
}; 
struct stack *top=-1;

int main()
{
 int data,n,len;
 struct stack *ptr,*temp;
 printf("enter string");
 scanf("%s",&data);
 n=strlen(data);
 for(i=0;i<n;i++)
 {
  ptr=(struct stack *)malloc(sizeof(struct stack));
  ptr->data=data[i];
  ptr->next=top;
  top=ptr;
 }
}