#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char str[31];
    scanf("%s",str);
    int length  = strlen(str);
    if(str[length-3]=='s'&&str[length-2]=='a'&&str[length-1]=='n'){
        printf("Yes");
    }else printf("No");
    return 0;
}