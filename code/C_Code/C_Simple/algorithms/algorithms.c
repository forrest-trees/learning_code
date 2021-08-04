#include <stdio.h>

int main()
{
    //桶排序(o(2*(m+n)))
    /*int a[11],i,j,t;
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
    *///有bug,一直打印
    //冒泡排序(o(n的二次))
    /*int a[50],i,j,t,n;
    printf("how many numbers do u wanna sort: \n");
    scanf("%d",&n);//读入数字数目
    for (i = 1;i <= n;i++)
    {
        scanf("%d",&a[i]);
    }//讀入數字
    //冒泡排序core
    for (i = 1;i <= n-1;i++)//只需排n-1个
    {
        for (j = 1;j <= n-i;j++)//排到还未归位的位置，只需排n-i个
        {
            if (a[j] < a[j+1])
            {
                t = a[j],a[j] = a[j+1],a[j+1] = t;//交换顺序
            }
        }
    }
    for (i = 1;i <= n;i++)
    {
        printf("sorted:%d",a[i]);
    }//打印
    */

   //姓名与数字捆绑排序(冒泡排序2.0)
    /*struct student
    {
        char name[21];
        int score;
    };
    struct student a[21],t;
    int i,j,n;
    scanf("%d",&n);
    for (i = 1;i <= n;i++)
    {
        scanf("%s %d",a[i].name,&a[i].score);
    }
    for (i = 1;i <= n-1;i++)
    {
        for(j = 1;j <= n-i;j++)
        {
            if(a[j].score < a[j+1].score)
            {
                t = a[j],a[j] = a[j+1] = t;
            }
        }
    }
    for (i = 1;i <= n; i++)
    {
        printf("%s\n",a[i].name);
    }*/

    //快速排序
    /*int a[101],n,i;
    printf("how many numbers do you have? \n");
    scanf("%d",&n);
    //构造快速排序函数
    void quicksort(int left,int right)
    {
        int i,j,t,temp;//temp为基准量
        if (left > right)
            return;
        i = left,j = right;
        temp = a[left];//最左边的设为基准
        while (j != i)
        {
            //用i,j找量，j找比基准小的,i找比基准大的
            while (a[j] >= temp && i < j)
                j--;
            while (a[i] < temp && i < j)
                i++;
            if (i < j)
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }//将找到的量交换位置
        }
        
        quicksort(left,i-1);
        quicksort(j+1,right);
        //递归，一分为二
    }
    for (int i = 1;i <= n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(1,n);
    for (i = 1;i <= n;i++)
    {
        printf("%d",a[i]);
    }*///有bug

    //小哼買書
    /*int n,i,j,t;
    int a[100];
    printf("how many readers are they: \n");
    scanf("%d",&n);
    for (i = 0;i < 101;i++)
    {
        a[i] = 0;
    }
    for (i = 0;i < n;i++)
    {
        scanf("%d",&t);
        a[t]++;
        if (a[t] > 1)
        {
            n = n-(a[t]-1);
            a[t] = 1;

        }//将重复的去除
    }
    for (i = 0;i <= n;i++)
    {
        for (j = 0;j < a[i];j++)
        {
            printf("%d",t);
        }
    }*/

    //隊列
    /*struct queue
    {
        int q[200];
        int head;
        int tail;
    };//构造结构体，同时储存
    struct queue q;
    int i;
    q.head = 1;
    q.tail = 1;//初始化
    for (i = 0;i < 9;i++)
    {
        scanf("%d",&q.q[q.tail]);
        q.tail++;
    }
    while (q.head < q.tail )
    {
        //打印队首
        printf("%d",q.q[q.head]);
        q.head++;

        //将队首的移至队尾
        q.q[q.tail] = q.q[q.head];
        q.head++;
        q.tail++;
    }*/

    //栈
    
    getchar();getchar();
    return 0;
}