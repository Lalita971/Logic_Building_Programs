#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int i = 0,Table = 0;
    for(i = 0;i < iLength;i++)
    {
        if(Arr[i] % 11 == 0)
        {
            printf("%d ",Arr[i]);
        }
    }
    printf("\n");
}
int main()
{
    int iCnt = 0,iSize = 0;
    int *p = NULL;

    printf("Enter number of elements:");
    scanf("%d",&iSize);

    p =(int *)malloc(iSize * sizeof(int));

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
    Display(p,iSize);

    free(p);

    return 0;
}