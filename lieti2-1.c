// #include<stdio.h>
// #include<math.h>
// int main(){
    
//     for(int a=1;a<=9;a++){
//         for(int b=0;b<=9;b++){
//             int num=a*1100+b*11;
//             int m=floor(sqrt(num)+0.5);
//             if(m*m==num)    printf("%d\n",num);
//         }    
//     }
//     return 0;
// }

//法二
#include<stdio.h>
int main(){
    for(int x=1;;x++){
        int n=x*x;//要保证是完全平方
        if(n<1000)  continue;
        if(n>9999)  break;
        int hi=n/100;//取出千，百两位上的数字
        int lo=n%100;//取出十，个两位上的数字
        if(hi/10==hi%10&&lo/10==lo%10)  printf("%d\n",n);
    }
    return 0;
}

//不仅要保证这个数是完全平方数，还要保证，这个数的形式是aabb形式














//7744问题
//程序2-3