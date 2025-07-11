#include<stdio.h>
int main()
{
  int g,s,b;
  printf("水仙花数：");
  for(int i=100;i<1000;i++){
    g=i%10;
    s=(i/10)%10;
    b=i/100;
    if(i==g*g*g+s*s*s+b*b*b){
      printf("%d\t",i);
    }
  }
  return 0;
}
