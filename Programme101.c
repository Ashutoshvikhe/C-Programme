//
//  Programme101.c
//  
//
//  Created by Ashutosh Vikhe on 31/03/21.

//  Accept the number from user and  count the number of bits which are 1 without using / and % operator

#include <stdio.h>
#include <stdbool.h>
unsigned int CountBit(unsigned int iNo)
{
    unsigned int iMask =0x00000001;
    unsigned int iResult= 0;
    int iCount = 0,i=0;
    for(i=1;i<=32;i++)
    {
        iResult=iNo&iMask;
        if(iResult==iMask)
        {
            iCount++;
        }
        iMask = iMask << 1;
    }
    return iCount;
}
int main()
{
    unsigned int iValue = 0;
    int iRet = 0;
    
    printf("Enter your Number\n");
    scanf("%u",&iValue);
    
    iRet=CountBit(iValue);
    printf("Total count of ON bit is:%d\n",iRet);
    return 0;
}




