//
//  Programme96.c
//  
//
//  Created by Ashutosh Vikhe on 31/03/21.
// Accepth the number from user and take a position from user and check whwther the bit at that position is on or not

#include <stdio.h>
#include <stdbool.h>
bool CheckBit(unsigned int iNo,int iPose)
{
    unsigned int iMask =0x00000001;
    unsigned int Result= 0;
    if((iPose<1) || (iPose>32))
    {
        return false;
    }
    iMask= iMask << (iPose-1);       //Left Hand Operator
    Result = iNo & iMask;            //And operator
    if(Result==iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    unsigned int iValue = 0;
    bool bRet;
    unsigned int iPose = 0;
    
    printf("Enter your Number\n");
    scanf("%u",&iValue);
    
    printf("Enter  Position\n");
    scanf("%d",&iPose);
    
    bRet=CheckBit(iValue,iPose);
    if(bRet==true)
    {
        printf(" Bit is On\n");
    }
    else
    {
        printf(" Bits is Off\n");
    }
    return 0;
}


