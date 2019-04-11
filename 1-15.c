// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);


//     printf("%d %d\n",a,b);
//     return 0;
// }
// //

//习题1-1
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     float av=(a+b+c)/3.0;
//     printf("%.3lf\n",av);
//     return 0;
// }
// //习题1-2
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d%d%d",&a);
//     float av=(double)5(a-32)/9;
//     printf("%.3lf\n",av);
//     return 0;
// }
// //习题1-3
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%d\n",(n*(1+n))/2);
//     return 0;
// }
//习题1-4,notice
// #include<stdio.h>
// #include<math.h>
// #define pi 4.0*atan(1.0)
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("%lf%lf\n",sin(pi*n)/180,cos(pi*n)/180);
//     return 0;
// }

//习题1-5
#include<stdio.h>
int main(){
    int clo=95;
    int num;
    scanf("%d",&num);
    float sum=clo*num;
    if(sum>=300){
         sum=sum*0.85;
        printf("%.2lf",sum);
    }else
        printf("%.2lf",sum);
    return 0;
}