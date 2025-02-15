#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n;
    int *p;
    int *q;
    int *ans;
    scanf("%d",&n);
    p = (int *)malloc(sizeof(int)*n);
    q = (int *)malloc(sizeof(int)*n);
    ans = (int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&q[i]);
    }

    for(int i=0;i<n;i++){
        ans[q[i]-1] = q[p[i]-1];         
    }
    for(int i=0;i<n;i++){
        printf("%d ",ans[i]);
    }

    free(p);
    free(q);
    free(ans);
    return 0;
}