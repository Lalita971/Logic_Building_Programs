#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0,EvenSum =0,OddSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
          EvenSum = EvenSum + iDigit;       
        }
        else
        {
            OddSum = OddSum + iDigit;
        }
        iNo = iNo / 10;
    }
    return EvenSum - OddSum;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}