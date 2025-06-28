#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0,Table = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1;iCnt <= 10;iCnt++)
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
    
    Table(iValue);
    return 0;
}