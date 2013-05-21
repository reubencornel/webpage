#include<stdio.h>
//this macro calculates the size of the array for us
//for eg if you pass it 10 element array. In linux
//sizeof(array) will be 40 bytes since 1 int in linux is 4 bytes
//Therefore size of array will be 40/4 =10 elements
#define NELEM(array) (sizeof(array)/sizeof(int))
struct node{
  int n;
  struct node *next;
};
typedef struct node node;

node *Insert(node *first,int number){
  node *new_node=(node *)malloc(sizeof(node));
  node *temp=first;
  node *temp1=first;

  new_node->n=number;
  new_node->next=NULL;

  if(first==NULL){
    first=new_node;
    return first;
  }

  for(;temp!=NULL;temp=temp->next){
    if(temp->n>number){
      for(;temp1->next!=temp;temp1=temp1->next);
      break;
    }
  }

  if(temp==first){
    new_node->next=first;
    first=new_node;
    return first;
  }

  if(temp==NULL){
    for(;temp1->next!=temp;temp1=temp1->next);
    temp1->next=new_node;
    return first;
  }
  
  new_node->next=temp;
  temp1->next=new_node;
  return first;

}

//the insertion sort function takes the first node pointer and 
//also the list of numbers to be sorted
node *InsertionSort(node *first,int list[],int n){
  int i=0;

  for(i=0;i<n;i++){
    first=Insert(first,list[i]);
  }
  return first;
}

void printList(node *first){
  node *temp=first;
  printf("List Contents:\n");
  while(temp!=NULL){
    printf("%d\n",temp->n);
    temp=temp->next;
  }
}

int main(){
  node *first=NULL;
  int a[]={1,453,345,356,3,65,6,4645,4};

  first=InsertionSort(first,a,NELEM(a));
  printList(first);

}
