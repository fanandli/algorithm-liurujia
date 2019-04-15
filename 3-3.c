
//蛇形填数

#include<stdio.h>
#include<string.h>
#define maxn 10
int a[maxn][maxn];//用二维数组来处理这样的数据
int main(){
    int n,tot=0;//用tot来为数组赋值
    scanf("%d",&n);
    memset(a,0,sizeof(a));//初始化为0，也用来判断是否越界

    int x,y;
    tot=a[x=0][y=n-1]=1;
    while(tot<n*n){
        while(x+1<n&&!a[x+1][y])    a[++x][y]=++tot;
        while(y-1>=0&&!a[x][y-1])   a[x][--y]=++tot;
        while(x-1>=0&&!a[x-1][y])   a[--x][y]=++tot;
        while(y+1<n&&!a[x][y+1])    a[x][++y]=++tot;
    }

    for(x=0;x<n;x++){
        for(y=0;y<n;y++)
            printf("%3d",a[x][y]);
        printf("\n");  
    } 
    return 0;
}