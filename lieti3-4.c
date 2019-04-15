#include <stdio.h>
#define maxn 1010
int main()
{
    int num;
    int a[maxn], b[maxn];
    
    int kase = 0;
    while (scanf("%d", &num) == 1 && num)
    {
        printf("game %d:\n", ++kase);
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &a[i]);//输入要猜测的一组数
        }
        for (;;)
        {
            int A=0, B=0;
            for (int i = 0; i < num; i++)//统计a
            {
                scanf("%d", &b[i]);
                if (a[i] == b[i])
                    A++;
            }
            if (b[0] == 0)
                break;
            for (int d = 1; d <= 9; d++)//统计b,统计数字d在答案序列和猜测序列中各出现多少次
            {
                int c1 = 0, c2 = 0;
                for (int i = 0; i < num; i++)
                {
                    if (a[i] == d)
                        c1++;
                    if (b[i] == d)
                        c2++;
                }
                if (c1 < c2)
                    B += c1;
                else
                    B += c2;
            }
            printf("(%d,%d)\n",A,B-A);
        } 
    }
    return 0;
}