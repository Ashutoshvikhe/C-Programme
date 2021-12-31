//
//  Programme31.c
//  
//
//  Created by Ashutosh Vikhe on 09/03/21.
// Accept the number from user and display the differnce between maximum digit and smaller digits

#include <stdio.h>
int MaxMin(int iValue1)
{
    int iCnt = 0;
    int iDigits = 0;
    int iMax = 0;
    int iMin = 9;
    if(iValue1 < 0)
    {
        iValue1 = -iValue1;
    }
    while(iValue1 > 0)
    {
        iDigits = iValue1 % 10;
        if( iDigits > iMax )
        {
            iMax = iDigits;
        }
        if(iDigits < iMin)
        {
            iMin = iDigits;
        }
        iValue1 = iValue1 / 10;
        iCnt = iMax - iMin;
    }
    return iCnt;
}
int main()
{
    int iNo1= 0;
    int iRet = 0;
    printf("Enter the number\n");
    scanf("%d",&iNo1);
    iRet = MaxMin(iNo1);
    printf("Differenec is :%d\n",iRet);
    return 0;
}
