#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],s[100];
    int i,len,mid,next,top;

    gets(a);
    len = strlen(a);
    mid = len/2;

    top = 0;
    for (i = 0;i < mid;i++)
    {
        s[++top] = a[i];
    }

    if (len%2 == 0)
        next = mid+1;
    else 
        next = mid+2;
    for (i = next;i <= len;i++)
    {
        if (a[i-1] != s[top])
            break;
        top--;
    }

    if (top == 0)
        printf("YES");
    else
        printf("NO");

    getchar();getchar();
    return 0;
}