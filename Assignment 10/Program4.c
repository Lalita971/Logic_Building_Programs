#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0,Mult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            Mult = Mult * iDigit;
        }
        iNo = iNo /10; 
    }
    return Mult;

}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}