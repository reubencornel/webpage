#include<stdio.h>
#include<string.h>

//node definition
struct node{
  char name[50];
  int roll_number;
  struct node *next;
};
typedef struct node node;

node* addToBegining(node *first,char name[],int roll_no){
  node *new_node=(node *)malloc(sizeof(node));

  //initialise new node
  strcpy(new_node->name,name);
  new_node->roll_number=roll_no;
  new_node->next=NULL;

  //make first point to new node if first is NULL
  if(first==NULL){
    first=new_node;
    return first;
  }
  
  //attach new node to begining of list
  new_node->next=first;
  first=new_node;

  //return modified value
  return first;

}
node *addToEnd(node *first,char name[],int roll_no){
  node *new_node=(node *)malloc(sizeof(node));
  node *temp=first;

  //initialise new node
  strcpy(new_node->name,name);
  new_node->roll_number=roll_no;
  new_node->next=NULL;

  //if the list is empty do this.
  if(first==NULL){
    first=new_node;
    return first;
  }

  //traverse list
  while(temp->next!=NULL){
    temp=temp->next;
  }

  //attach node to end of the list
  temp->next=new_node;
  return first;
}

void printList(node *first){
  node *temp=first;
  while(temp!=NULL){
    //print values
    printf("Name:%s\n",temp->name);
    printf("Number:%d\n",temp->roll_number);
    printf("\n");
    //traverse the list
    temp=temp->next;
  }
}

void readline(char str[],int n){
  char c=0;
  int i=0;
  //I used this function because scanf cannot 
  //read spaces.
  if((c=getchar())!='\n')
    str[i++]=c;
  for(;i<n-1 && (c=getchar())!=EOF && c!='\n';++i)
    str[i]=c;

  str[i]='\0';

}
 

int main(){
  int i=0;
  char name[50];
  int roll_no;
  node *first=NULL;


  for(i=0;i<5;i++){
    printf("Enter Name:");
    readline(name,50);
    printf("Enter Roll No:");
    scanf("%d",&roll_no);
    
    //    first=addToBegining(first,name,roll_no);
    first=addToEnd(first,name,roll_no);
  }
  printList(first);
}
