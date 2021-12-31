// File Name : Programme12.c
// Function:Multiplication
// Input : 3
// Output : 6
// Created by Ashutosh Vikhe on 02/03/21.
// Que :Accept the number from user and find the multipliaction upto that numberr

#include <stdio.h>
int multipliaction(int iValue)
{
    int iCnt = 0;
    int iMult = 1;
    if(iValue < 0)
    {
        iValue = - iValue;
    }
    for(iCnt =1;iCnt<=iValue;iCnt++)
    {
        iMult = iMult * iCnt;
    }
    return iMult;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    
    printf("Enter First Number ...\n");
    scanf("%d",&iNo);
    
    iRet = multipliaction(iNo);
    printf("Result is :%d\n",iRet);
           
    return 0;
}

