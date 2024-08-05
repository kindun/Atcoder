#include <stdio.h>

int main(void)
{
 int a[100]={0};
 int n;
 scanf("%d",&n);
 for(int i=0;i<n;i++){
   scanf("%d",&a[i]);
 }
 for(int i=0;i<n;i++){
   int count = 0;
   for(int j=0;j<n;j++){
     if(a[i] < a[j]){
       count++;
     }
   }
   if(count == 1){
     printf("%d\n",i+1);
   }
 }

  return 0;
}
