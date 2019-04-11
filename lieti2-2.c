#include<stdio.h>
int main(){
    int n;
    int step=0;
    scanf("%d",&n);
    while(n>1){//while(n!=1)
        if(n%2==0){
            n=n/2;
        }  
        else{
            n=3*n+1;//
        }
        step++;  
    }
    printf("%d",step);
    return 0;
}
//改进
#include<stdio.h>
int main(){
    int n;
    int step=0;
    scanf("%d",&n);
    long long n1=n;
    while(n1>1){
        if(n1%2==1) n=n*3+1;
        else    n/=2;
        step++;
    } 
    printf("%d\n",step);
    return 0;
}
