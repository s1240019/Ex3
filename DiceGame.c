#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10
int main(){
  int d1,d2,sum;
  char name[N];
  
  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  
  
  srand((unsigned)time(NULL));

  printf("Rolling the dice...\n");

  d1=rand()%6+1;
  d2=rand()%6+1;
  
  printf("Die 1: %d\n",d1);
  printf("Die 2: %d\n",d2);

  sum=d1+d2;
  printf("Total value: %d\n",sum);

  if(sum>7)printf("%s won!\n",name);
  else printf("%s lost!\n",name);
  
  return 0;
}
  
  
