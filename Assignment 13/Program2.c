#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;
    char Ch = 'A';
    char ch = 'a';
    for(i = 1;i <= iRow;i++)
    {
        for(j = 0;j < iCol;j++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t",ch + j);                
            }
            else
            {
            printf("%c\t",Ch + j);
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows anf columns :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;

}