#include <stdio.h>
#include <stdlib.h>

//插入数字
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *p,*q,*t,*head;
    int i,a,n;
    scanf("%d",&n);
    head = NULL;
    for (i = 0;i <= n;i++)
    {
        scanf("%d",&a);
        p = (struct node *)malloc(sizeof(struct node));
        p->data = a;//将数据存储到当前节点的data中
        p->next = NULL;//将当前节点的后继指针指向空,即指针指向的下一个节点为空
        if (head == NULL)
            head = p;//若当前是第一个创造的节点则将头指针指向节点
        else
            q->next = p;//若不是第一个，则将上一个节点后继指针指向当前节点
        q = p;//指针q指向当前节点
    }

    scanf("%d",&a);
    t = head;
    while (t != NULL)
    {
        if (t->next->data > a)
        {
            scanf("%d",&a);
            p = (struct node *)malloc(sizeof(struct node));
            p->data = a;
            p->next = t->next;
            t->next = p;
            break;
        }
        t = t->next;
    }

    t = head;
    while (t != NULL)
    {
        printf("%d",t->data);
        t = t->next;
    }
    
    getchar();getchar();
    return 0;
}