#include <stdio.h>

int main(void)
{
    char n[4];
    
    scanf("%s",n);

    printf("%c%c%c %c%c%c",n[1],n[2],n[0],n[2],n[0],n[1]);

    return 0;
}