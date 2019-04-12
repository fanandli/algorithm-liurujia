#include<stdio.h>
int main(){
    int a,b,c;
    for(int i=100;i<=999;i++){
        a=i%10;
        b=i/10%10;
        c=i/100;
        if(c*c*c+b*b*b+a*a*a==i)
            printf("%d\n",i);
    }
    return 0;
}