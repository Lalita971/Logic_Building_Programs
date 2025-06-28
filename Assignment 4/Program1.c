#include<stdio.h>
int MultFact(int iNo)
{     
    int iCnt =0,Mult =1 ;   
    
    if(iNo < 0)
    {
      iNo =-iNo;
    }
    for(iCnt =1;iCnt < iNo;iCnt++)
    {
    if((iNo % iCnt) == 0)
      {
        printf("%d\n",iCnt);
        Mult = Mult * iCnt;
      }
    }
    return Mult;
}
int main()
{
     int iValue = 0;
     int iRet = 0;
     
     printf("Enter number:\n");
     scanf("%d",&iValue);

     iRet = MultFact(iValue);

     printf("%d",iRet);

     return 0;
}