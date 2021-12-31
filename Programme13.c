//  File name :Programme13.c
// Function:Multiplication
// Input : 3
// Output : 6
// Created by Ashutosh Vikhe on 02/03/21.
// Que :Accept the number from user and find the multipliaction upto that numberr

#include <stdio.h>
int Fact(int iValue)
{
    int iCnt = 0;
    int iFact = 1;
    if(iValue < 0)
    {
        iValue = - iValue;
    }
   while (iValue > 0)
   {
       iFact = iFact * iValue;
       iValue--;
   }
    return iFact;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    
    printf("Enter First Number ...\n");
    scanf("%d",&iNo);
    
    iRet = Fact(iNo);
    printf("Result is :%d\n",iRet);
           
    return 0;
}

