 //
//  Programme23.c
//  
//
//  Created by Ashutosh Vikhe on 08/03/21.
// Que : Accept the number from user and find the multiplication of its digits

#include <stdio.h>
int DigitsMul(int iValue1)
{
    int iDigits = 0;
    int iMult = 1;
    if(iValue1 < 0)
    {
        iValue1 = -iValue1;
    }
    while(iValue1 > 0)
    {
        iDigits = iValue1 % 10;
        if(iDigits != 0)
        {
            iMult = iMult * iDigits;
        }
        iValue1 = iValue1 / 10;
    }
    /*
    for(;iValue1 > 0;iValue1 = iValue1/10)
    {
        iDigits = iValue1 % 10;
        iMult =(iMult * 10)+iDigits;
    }
     */
    return iMult;
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;
    printf("Enter the number..\n");
    scanf("%d",&iNo1);
    iRet =DigitsMul(iNo1);
    printf("Multiplication of the Digits is equal to : %d\n",iRet);
    return 0;
}
