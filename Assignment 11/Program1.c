#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char Ch = 'A';
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("%c\t",Ch);
        Ch++;
    }

}                                        
int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}