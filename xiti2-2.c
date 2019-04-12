#include<stdio.h>
int main(){
    int num;
    int i;
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        for(i=10;i<=100;i++){
            if(i%3==a&&i%5==b&&i%7==c){
                printf("%d\n",i);
                break;
           } 
        }
        if(i>100)
            printf("NO answer\n");
    }
    return 0;
}