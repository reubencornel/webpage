#include<stdio.h>
int main(){
  /*variable declaration*/
  int i=0;
  int list[5];
  int entry_number=0;
  int limit=10;
 
  /*fill up list up to the brim*/
  for(i=0;i<limit;i++){
    list[i]=entry_number;
    entry_number++;
  }

  /*try printing the list*/
  for(i=0;i<limit;i++)
    printf("%d\n",list[i]);

}
