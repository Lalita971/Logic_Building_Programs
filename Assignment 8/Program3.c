#include<stdio.h>

int KMtoMeter(int iNo)
{
    int Meter = 1000,iReturn =0;

    iReturn = Meter * iNo;
    
    return iReturn;
}

int main()
{
    int iValue =0,iRet = 0;

    printf("Enter distance :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance is %d",iRet);
    return 0;
}