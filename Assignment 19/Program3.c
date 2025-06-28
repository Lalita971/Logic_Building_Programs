#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int i = 0,CountEven = 0,CountOdd =0;
    for(i = 0;i < iLength;i++)
    {
        if(Arr[i] == 11)
        {
            return True;
        }
        else
        {
            return False;
        }
        
    }
}

int main()
{
    int iSize = 0,iCnt = 0,bRet = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    p = (int *)malloc (iSize * sizeof(int));

    printf("Enter %d elements :\n",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter elements  %d:",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize);
    if(bRet == True)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(p);

    return 0;
}