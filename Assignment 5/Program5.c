#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt =0,Mult =0;
    for(iCnt = 1;iCnt <=5;iCnt++)
    {
        Mult =iNo * iCnt;
        printf("%d\t",Mult);
    }
}
int main()
{
    int iValue =0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}