//
//  Programme20.c
//  
//
//  Created by Ashutosh Vikhe on 03/03/21.
//  Accept the number from user and Dispaly the the addition of digits

#include <stdio.h>
int SumDigits(int iValue)
{
    int iDigit = 0;
    int iSum = 0;
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    while(iValue > 0)
    {
        iDigit = iValue % 10;
        iSum = iSum + iDigit;
        iValue = iValue / 10;
    }
    return iSum;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter the number..\n");
    scanf("%d",&iNo);
    iRet = SumDigits(iNo);
    printf("Sum is :%d\n",iRet);
    return 0;
    
}
