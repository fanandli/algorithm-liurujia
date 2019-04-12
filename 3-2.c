#include<stdio.h>
#include<string.h>
#define maxn 1010
int a[maxn];
int main(){
    int n,k,first=1;//first为标记
    memset(a,0,sizeof(a));
    scanf("%d%d",&n,&k);//灯数和人数
    for(int i=1;i<=k;i++){//查找的次数
        for(int j=1;j<=n;j++){//从第一个开始查找
            if(j%i==0)//如果有倍数关系
                a[j]=!a[j];//取非，即相当于关灯
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]){//为1,即没有被关灯
            if(first)
                first=0;
            else
                printf(" ");
            printf("%d",i);//则输出下标
        }
    }
    printf("\n");
    return 0;

}