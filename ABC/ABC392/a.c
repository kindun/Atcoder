#include <stdio.h>
int main(void)
{
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);

    for(int i=0;i<3-1;i++){
        for(int j=3-1;j>i;j--){
            if(a[j] < a[j-1]){
                int tmp;
                tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }
        }
    }
    if(a[0]*a[1] == a[2]){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}