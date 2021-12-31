//
//  Programme21.c
//  
//
//  Created by Ashutosh Vikhe on 03/03/21.
//

#include <stdio.h>
int EvenDigits(int iValue)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iValue < 0)
    {
        iValue = -iValue;
    }
    while(iValue > 0)
    {
        iDigit = iValue % 10;
        if ((iDigit % 2)== 0)
        {
            iCnt++;
        }
        iValue = iValue / 10;
    }
    return iCnt;
}
int main()
{
    int iNo = 0;
    int iRet = 0;
    printf("Enter the number..\n");
    scanf("%d",&iNo);
    iRet = EvenDigits(iNo);
    printf("Number of even digit is :%d\n",iRet);
    return 0;
}

