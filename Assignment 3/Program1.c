#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    int iCnt =1;
    while(iNo>0)
    {
        if(iCnt % 2 ==0)
        {
            printf("%d ",iCnt);
            iNo--;
        }
        iCnt++;
    }
}
int main()
{
    int iValue =0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;

}