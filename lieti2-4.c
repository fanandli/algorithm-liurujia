// #include<stdio.h>
// int main(){
//     int sum;
//     int num;//,n=1
//     scanf("%d",&num);
//     for(int i=1;i<=num;i++){
//         int n=1;//还是在这？
//         for(int j=i;j>1;j--){
//             n*=j;
//         }
//         sum+=n;
//     }
//     printf("%d",sum%1000000);
//     return 0;
// }
//
#include<stdio.h>
#include<time.h>
int main(){
    const int mod=1000000;
    int sum;
    int num;//,n=1
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        int n=1;//还是在这？
        for(int j=i;j>1;j--){
            n=(n*j%mod);

        }
        sum=(sum+n)%mod;
    }
    printf("%d",sum);
    printf("time used =%.2f\n",(double)clock()/CLOCKS_PER_SEC);
    return 0;
}




