//
//  Programme100.c
//  
//
//  Created by Ashutosh Vikhe on 31/03/21.
//
// Accept the number from user and and accpet the position and make the bit off

#include <stdio.h>
unsigned int OffBit(unsigned int iNo,int iPose)
{
    unsigned int iMask =0x00000001;
    unsigned int Result= 0;
    if((iPose<1) || (iPose>32))
    {
        return false;
    }
    iMask= iMask <<(iPose-1);
    iMask = ~iMask;                        /// Tilda Operator
    Result = iNo & iMask;
    return Result;
}
int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;
    unsigned int iPose = 0;
    
    printf("Enter your Number\n");
    scanf("%u",&iValue);
    
    printf("Enter  Position\n");
    scanf("%d",&iPose);
    
    iRet=OffBit(iValue,iPose);
    
    printf("Number after updation is:%u\n",iRet);
    return 0;
}




