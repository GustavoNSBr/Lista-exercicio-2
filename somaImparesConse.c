#include <stdio.h>

int main()
{
 int x, y, aux = 0, i;
 int menor, maior;

 scanf("%d%d", &x,&y);

 if(x < y){
  menor = x;
  maior = y;
 }else{
  maior = x;
  menor = y;
 }

 for(i = (menor + 1); i < maior; ++i)
 {
  if(i % 2 != 0){
   aux += i;
  }
 }

 printf("%d\n", aux);

 return 0;
}