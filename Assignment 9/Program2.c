#include<stdio.h>
#define True 1
#define False 0

typedef int BOOL;

BOOL ChZero(int iNo)
{
    int iDigit =0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return True;
        }
        iNo = iNo / 10;
    }
    return False;
}
int main()
{
    int iValue = 0;
    BOOL bRet = False;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = ChZero(iValue);

    if(bRet == True)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }
    return 0;
}