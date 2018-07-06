#include<stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){
 
  int s,l;
  char str[8];
  
  printf("What is your name?\n>");
  scanf("%s",str);
  printf("Hello, %s!\n",str);
  
  /* 乱数の種を初期化 */
  srand(time(NULL));
 
  /* サイコロを振る */
  s = rand() % 6 + 1;
  l = rand() % 6 + 1;
 
  /* サイコロの出目を出力 */
  printf("Rolling the dice...\n");
  printf("Die 1: %d \n", s);
  printf("Die 2: %d \n", l);
  printf("Total value: %d\n",s+l);

  if(s+l>=7){
    printf("%s won!\n",str);
  }
  else {
    printf("%s lost\n",str);
  }
  
  return 0;
}
