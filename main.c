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
  printf("Enter 2 Numbers : \n");
  printf("X : \n");
  scanf("%d",&x);
  printf("Y : \n");
  scanf("%d",&y);
  printf("Sum : %d\n",add(x, y));
  printf("Sub : %d\n",sub(x, y));
  printf("Power : %d\n",powerx, y));
  printf("Quotient : %d\n",division(x, y));
  printf("Multiply : %d\n",multiply(x, y));
  printf("Remainder : %d\n",remainder(x, y));
  printf("Power : %d\n",pow(x, y));
  printf("Sqrt : %d\n",sqrt(x, y));
}
