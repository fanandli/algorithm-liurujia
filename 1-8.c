#include<stdio.h>
int main(){
    int a,b,t;
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("%d %d\n",a,b);
    return 0;
}
//改进
//使用情景不广泛
#include<stdio.h>
int main(){
    int a ,b,t;
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d\n",a,b);
    return 0;
}
//两数的转换