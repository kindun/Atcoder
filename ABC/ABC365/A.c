#include <stdio.h>

int main(void)
{
  int Y;
  int day = 365;
  scanf("%d",&Y);
  
  if(Y%4 != 0){
    printf("%d\n",day);
  }else{
    if(Y%100 != 0){
      printf("%d\n",++day);
    }else{
      if(Y%400 != 0){
        printf("%d\n",day);
      }
    }
    
  }
  if(Y%400 == 0){
    printf("%d\n",++day);
  }
  
  return 0;
}
