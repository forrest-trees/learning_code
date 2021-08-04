#include <stdio.h>
int main()
{
        //桶排序(o(2*(m+n)))
    int a[11],i,j,t;
    for (i = 0;i < 10;i++)
    {
        a[i] = 0;
    }
    for (i = 1;i <= 5;i++)
    {
        scanf("%d",&t);
        a[t]++;
    }
    for(i= 0;i <= 10;i++ )
    {
        for (j= 0;j < a[i];j++ )
        {
            printf("%d",i);
        }
    }
    //有bug,一直打印
    return 0;
}