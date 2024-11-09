#include <stdio.h>

int main(void)
{
    int n,m,x[200001]={0},a[200001]={0};
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){scanf("%d",&x[i]);}
    for(int i=0;i<m;i++){scanf("%d",&a[x[i]-1]);}

    
    int sum=1;
    for(int j=0;j<m;j++){
        int count=1;
        for(;a[x[j]-1]>1;count++){
          a[x[j]-1+count]++;
          a[x[j]-1]--;
          sum++;
        }
       
    }

    for(int i=0;i<n;i++){
        if(a[i]==0){
            printf("-1");
            return 0;
        }
    }  

    printf("%d",sum);
    
    return 0;
}
