#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char s[101];
    char t[101];

    scanf("%s",s);
    scanf("%s",t);

    for(int i=0;s[i]!='\0' || t[i]!='\0';i++){
        if(s[i]!=t[i]){
            printf("%d",i+1);
            return 0;
        }
    }
    printf("0");
    
    return 0;
}