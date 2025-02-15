#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n,m;
    int a[1001];
    int flag=0,count=0;
    int ans[1001];
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d",&a[i]);
    }

    for(int i=1;i<=n;i++){
        int check=0;
        for(int j=0;j<m;j++){
            if(i==a[j]){
                check=1;
            }
        }
        if(check==0){
            ans[count]=i;
            flag=1;
            count++;
        }
    }
    if(flag==0){printf("0");}
    else{
        printf("%d\n",count);
        for(int i=0;i<count;i++){
            printf("%d ",ans[i]);
        }
    }
}