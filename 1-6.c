// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d%d%d\n",n%10,n/10%10,n/100);
//     return 0;
// }
//改进
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m=(n%10)*100+(n/10%10)*10+(n/100);
    printf("%3d",m);
    return 0;
}
//三位数的反转