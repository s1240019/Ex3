#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int d1,d2,sum;
  srand((unsigned)time(NULL));
  printf("Rolling the dice...\n");
  d1=rand()%6+1;
  d2=rand()%6+1;
  printf("Die 1: %d\n",d1);
  printf("Die 2: %d\n",d2);
  sum=d1+d2;
  printf("Total value: %d\n",sum);
  return 0;
}
  
  
