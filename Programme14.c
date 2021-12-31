//
//  Programme14.c
//  
//
//Created by Ashutosh Vikhe on 02/03/21.
//Que : Accept number from user and display its factor

#include <stdio.h>
void Factor(int iValue)
{
    int iCnt = 0;
    if(iValue <= 0)
    {
        iValue = -iValue;
    }
    for(iCnt=1;iCnt<=iValue;iCnt++)
    {
        if(iValue % iCnt==0)
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iNo1 =0 ;
    int iRet = 0;
    printf("Enter first Number..\n");
    scanf("%d",&iNo1);
    Factor(iNo1);
   
    return 0;
}
