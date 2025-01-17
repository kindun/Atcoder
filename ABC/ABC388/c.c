#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n;scanf("%d",&n);
  int *a;
  long long int count=0;
  a = (int *)malloc(sizeof(int)*n);
  for(int i=0; i<n; i++){
    scanf("%d",&a[i]);
  }

  int index=n-2;
  for(int i=n-1;i>0;i--){
    while(a[index]*2 > a[i] && index>=0){
      index--;
    }
    count += index+1;
  }
  printf("%lld\n",count);

  free(a);
  return 0;
}

