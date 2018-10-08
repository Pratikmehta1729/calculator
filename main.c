#include<stdio.h>
#include"add.h" 
#include"sub.h"
#include"power.h"
#include"division.h"
#include"multiply.h"
#include"remainder.h"
#include"sqrt.h"

void main(){
  int x,y;
  printf("Enter 2 Numbers : ");
  scanf("%d%d",&x,&y);
  int c=add();
  printf("%d",c);
}
