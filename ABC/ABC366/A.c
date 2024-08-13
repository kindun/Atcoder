#include <stdio.h>

int main(void)
{
  int n,t,a;
  scanf("%d %d %d",&n,&t,&a);
  if(t > n/2 || a > n/2){
    printf("Yes");
  }
  else{
    printf("No");
  }

  return 0;
}
