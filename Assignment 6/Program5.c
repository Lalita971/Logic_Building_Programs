#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0,Table =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10;iCnt >= 1;iCnt--)
    {
        Table = iCnt * iNo;
        printf("%d\t",Table);
    }
}
int main()
{
    int iValue =0;

    printf("Enter number:");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}