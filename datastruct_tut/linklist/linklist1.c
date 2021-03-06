#include<stdio.h>
struct node{
  int element;
  struct node *next;
};

typedef struct node node;

node* addToBegining(node *first,int num){
  node *new_node=(node *)malloc(sizeof (node));

  new_node->element=num;
  new_node->next=NULL;

  if(first==NULL){
    first=new_node;
    return first;
  }

  new_node->next=first;
  first=new_node;
  return first;
}

void printList(node *first){
  node *temp=first;
  while(temp!=NULL){
    printf("%d\n",temp->element);
    temp=temp->next;
  }
}


int main(){
  node *first=NULL;
  int i=0;

  for(i=0;i<50;i++){
    first=addToBegining(first,i);
  }

  printList(first);

}
