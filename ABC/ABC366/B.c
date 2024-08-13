#include <stdio.h>
#include <string.h>

int main(void)
{
  int n;
  scanf("%d",&n);
  char s[101][101];
  int max_len=0;
  for(int i=0;i<n;i++){
    scanf("%s",s[i]);
    int len=strlen(s[i]);
    if(max_len<len){
      max_len=len;
    }
  }

  for(int j=0;j<max_len;j++){
    char t[101];
    int idx=0;
    for(int i=n-1;i>=0;i--){
      t[idx++]= j<strlen(s[i]) ? s[i][j] : '*';
  }
  while(idx>0 && t[idx-1] == '*'){
    idx--;
  }
  t[idx]='\0';
  printf("%s\n",t);
  }
  
  return 0;
}
