#include<stdio.h>
#include<string.h>
// double a[]={0,0,12.01,0,0,0,0,1.008,0,0,0,0,0,14.01,16.00};



char s[1024];

int main(){
    double a[128];
    a['C']=12.01;
    a['H']=1.008;
    a['O']=16.00;
    a['N']=14.01;
    int testcase;
    scanf("%d",&testcase);
    while(testcase--){
        scanf("%s",s);//notice
        int n=strlen(s);
        double result=0;
        for(int i=0;i<n;){
            int ele=s[i];
            int num=0;
            i++;
            if(s[i]>='0'&&s[i]<='9'){
                num=num*10+s[i]-'0';
                i++;   
            }
            if(num==0)
                num=1;
            result+=a[ele]*num;
        }
        printf("%.3lf\n",result);
    }
    return 0;
    
}


