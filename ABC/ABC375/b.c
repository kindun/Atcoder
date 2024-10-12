#include <stdio.h>
#include <math.h>

double cost(int a,int b,int c,int d);
int main(void)
{
    int n;scanf("%d",&n);
    int x[200001],y[200001];
    x[0]=0;y[0]=0;
    x[n]=0,y[0]=0;
    for(int i=0;i<n;i++){
        scanf("%d %d",&x[i+1],&y[i+1]);
    }
    double cst=0;
    for(int i=1;i<=n+1;i++){
        cst+=cost(x[i-1],y[i-1],x[i],y[i]);
   }
    printf("%f\n",cst);
    return 0;
}

double cost(int a,int b,int c,int d)
{   double cst;
    cst=hypot(a-c,b-d);
    return cst;
}