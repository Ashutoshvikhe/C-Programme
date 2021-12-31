//
//  Programme98.c
//  
//
//  Created by Ashutosh Vikhe on 31/03/21.
//  Accept the Number From user and TOGGLE the bit given by the user

#include <stdio.h>
#include <stdbool.h>
unsigned int ToggleBit(unsigned int iNo,int iPose)
{
    unsigned int iMask =0x00000001;
    unsigned int Result= 0;
    if((iPose<1) || (iPose>32))
    {
        return false;
    }
    iMask= iMask <<(iPose-1);
    Result = iNo ^ iMask;
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
    
    iRet=ToggleBit(iValue,iPose);
    printf("Number after updation is:%d\n",iRet);
    return 0;
}



