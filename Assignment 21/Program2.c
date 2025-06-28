#include<stdio.h>
#include<stdlib.h>

#define True 1
#define False 0

typedef int BOOL;

int Minimum(int Arr[], int iLength)
{
    int i = 0,Min = Arr[0];

    for(i = 0; i < iLength; i++)
    {
        if(Arr[i] < Min )
        {
            Min = Arr[i];              
        }
    }    
    return Min;
} 

int main()
{
    int iSize = 0,iCnt = 0;
    int *p = NULL;
    BOOL bRet = 0;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        printf("Enter number %d:",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Minimum(p,iSize);

    printf("Smallest number is %d",bRet);
    
    free(p);

    return 0;
}