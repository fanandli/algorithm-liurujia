#include<stdio.h>
int main(){
    int a,b,c;
    int k;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        double da=a/b;
        k++;
        printf("case %d: %.cf",k,da)
    }
}