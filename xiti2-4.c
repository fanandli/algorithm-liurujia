#include<stdio.h>
int main(){
    int n,m;
    double sum=0;
    int k=0;//
    while (scanf("%d%d",&n,&m)!=EOF){
        k++;
        for(int i=n;i<=m;i++){
            double x=(double)1/(i*i);
            sum+=x;
        }
        printf("case %d:%.5f\n",k,sum);
    }
    return 0;
    
}