#include <stdio.h>

int main(void)
{
    int n;
    char s[200001];
    scanf("%d",&n);
    scanf("%s",s);

    char flag_0,flag_1,flag_2;
    int count=0;
    for(int i=2;i<n;i++){
        flag_2=s[i-2];
        flag_1=s[i-1];
        flag_0 =s[i];
        if(flag_0=='#'&&flag_1=='.'&&flag_2=='#')count++;
    }
    printf("%d",count);

    return 0;

}