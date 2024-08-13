#include <stdio.h>
#include <string.h>
#define M 200000
int main(int argc, char *argv[])
{
	char s[M],t[M];int a=0,b=0,c=0;
	scanf("%s\n%s",s,t);
	while(t[b]!='\0'){
		if(s[a]==t[b]){
			a++;
			b++;
		}
		else if(s[a-2]==s[a-1])a--;
		else {
			c=1;
			break;
		}
		
	}
	if(c==1)printf("No");
	else printf("Yes");
	
	return 0;
}
