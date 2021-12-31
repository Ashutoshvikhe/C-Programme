//
//  Programme99.c
//  
//
//  Created by Ashutosh Vikhe on 31/03/21.
// Accept the number from user and ON the bit given by the user if the given bit is on then it should remain ON.

#include <stdio.h>
#include <stdbool.h>
unsigned int OnBit(unsigned int iNo,int iPose)
{
    unsigned int iMask =0x00000001;
    unsigned int Result= 0;
    if((iPose<1) || (iPose>32))
    {
        return false;
    }
    iMask= iMask <<(iPose-1);
    Result = iNo | iMask;
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
    
    iRet=OnBit(iValue,iPose);
    printf("Number after updation is:%d\n",iRet);
    return 0;
}


/*
           OR Operator
    0 0 0 0  0 0 0 0  0 0 1 1  0 1 1 0
      
    1 1 1 1  1 1 1 1  1 1 1 1  1 0 1 1
 --------------------------------------------
    1 1 1 1  1 1 1 1  1 1 1 1  1 1 1 1
 
*/

