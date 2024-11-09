#include <stdio.h>

int main(void)
{
    int n,k;
    char s[101];
    scanf("%d %d",&n,&k);
    scanf("%s",s);

    int count=0,ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='O')count++;
        else count=0;
        if(count==k){ans++;count=0;}
    }

    printf("%d",ans);

    return 0;

}