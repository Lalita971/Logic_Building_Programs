#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;
    char Ch = 'A';
    for(i = 0;i < iRow;i++)
    {
        for(j = 0;j < iCol;j++)
        {
            printf("%c\t",Ch + i);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number rows and columns :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}