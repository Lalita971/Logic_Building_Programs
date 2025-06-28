#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int i = 0,CountEven = 0,CountOdd =0;
    for(i = 0;i < iLength;i++)
    {
        if(Arr[i] % 2 == 0)
        {
        CountEven++;
        }
        else
        {
            CountOdd++;
        }
    }
    return CountEven - CountOdd;
}

int main()
{
    int iSize = 0,iCnt = 0,iRet = 0;
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

    iRet = Frequency(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}
