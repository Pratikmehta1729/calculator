#include<stdio.h>
#include"add.h" 
void main(){
  int x,y;
  printf("Enter 2 Numbers : ");
  scanf("%d%d",&x,&y);
  int c=add();
  printf("%d",c);
}
