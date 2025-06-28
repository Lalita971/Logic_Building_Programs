#include <stdio.h>

double SquareMeter(int iValue)
{
    double SquareMeter = 0.0;
    SquareMeter = iValue * 0.0929;
    return SquareMeter;
}

int main()
{
    int iValue =0;
    double dRet =0;

    printf("Enter area in square feet:");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square Meter %lf",dRet);
    return 0;
}