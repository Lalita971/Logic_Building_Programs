#include<stdio.h>

int DollarToINR(int iNo)
{
    int iRate = 70,iResult = 0;
    iResult = iNo * iRate;
    return iResult;
}
int main()
{                                   
    int iValue = 0,iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}