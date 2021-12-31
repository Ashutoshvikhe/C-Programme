//
//  Programme30.c
//  
//
//  Created by Ashutosh Vikhe on 09/03/21.
// Accept the number from user and display the difference between its factors

// 10 (1+2+5+10)-(3+4+6+7+8+9) == -19

#include <stdio.h>
int Difference(int iValue1)
{
    int iCnt = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    int iDiff = 0;
    if(iValue1 < 0)
    {
        iValue1 = -iValue1;
    }
    for(iCnt = 1;iCnt <=iValue1;iCnt++)
    {
        if((iValue1 % iCnt)==0)
        {
            iSum1 = iSum1 +iCnt;
        }
        else if((iValue1 % iCnt )!= 0)
        {
            iSum2 = iSum2 + iCnt;
        }
        iDiff = iSum1 - iSum2;
    }
    return iDiff;
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;
    printf("Enter the number..\n");
    scanf("%d",&iNo1);
    iRet = Difference(iNo1);
    printf("Difference is : %d\n",iRet);
    
    return 0;
}
