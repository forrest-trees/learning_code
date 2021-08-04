#include <stdio.h>

int main()
{
    int price = 0;
    int money = 0;
    printf("How much is it? \n");
    scanf("%d %d",&price ,&money);
    
    printf("Here is %d + %d",money,price);


    return 0;
}