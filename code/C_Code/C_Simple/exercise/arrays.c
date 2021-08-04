#include <stdio.h>
const int TOTAL = 4;
float average(int length,int array[]);
int main()
{
    int score[TOTAL];
    for (int i = 0;i < TOTAL;i++)
    {
        scanf("%d",score[i]);
    }
    printf("The average is %f\n",average(TOTAL,score));
    
    return 0; 
}
float average(int length,int array[])
{
    int sum = 0;      
    for (int j = 0;j < length;j++)
    {
        sum += array[j];
    }
    return sum / (float)length;
}