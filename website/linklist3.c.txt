#include<stdio.h>
struct node{
  int n;
  struct node *next;
};
typedef struct node node;

node* addToEnd(node *first,int n){
  node *new_node=(node *)malloc(sizeof(node));
  node *temp=first;

  new_node->n=n;
  new_node->next=NULL;

  if(first==NULL){
    first=new_node;
    return new_node;
  }

  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=new_node;
  return first;
}

void printList(node *first){
  node *temp=first;
  while(temp!=NULL){
    printf("%d\n",temp->n);
    temp=temp->next;
  }
}


int main(){
  node *first=NULL;
  int i=0;

  for(i=0;i<50;i++){
    first=addToEnd(first,i);
  }

  printList(first);


}
