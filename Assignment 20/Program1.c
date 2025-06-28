#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int NO)
{
    int i = 0;
    for(i = 0;i < iLength;i++)
    {
        if(Arr[i] == NO)
        {
            return True;
        }
    }
    return False;
}
int main()
{
    int iSize = 0,iCnt = 0,iValue = 0;
    int *p = NULL;
    BOOL bRet = False;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    printf("Enter number of elements :");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter elements %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iValue);

    if(bRet == True)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}