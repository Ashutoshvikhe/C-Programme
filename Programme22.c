//
//  Programme21.c
//  Input : 75845
//  Output : 2
//  Created by Ashutosh Vikhe on 03/03/21.
//

#include <stdio.h>
int DigitFrequency(int iValue1,int iValue2)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iValue1 < 0)
    {
        iValue1 = -iValue1;
    }
    
    if((iValue2 < 0)||(iValue2 > 9))
    {
        return 0;
    }
     
    while(iValue1 > 0)
    {
        iDigit = iValue1 % 10;
        if(iDigit == iValue2)
        {
            iCnt++;
        }
        iValue1 = iValue1 / 10;
    }
    return iCnt;
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;
    printf("Enter the number..\n");
    scanf("%d",&iNo1);
    printf("Enter the Digit that you wont search..\n");
    scanf("%d",&iNo2);
    iRet = DigitFrequency(iNo1,iNo2);
    printf("Number of Given digit is :%d\n",iRet);
    return 0;
}

