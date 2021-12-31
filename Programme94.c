//
//  Programme94.c
//  
//
//  Created by Ashutosh Vikhe on 31/03/21.
// Accept thr number from user and  and check whether the 5th bit is on or not

#include <stdio.h>
#include <stdbool.h>
bool CheckBit(unsigned int iNo)
{
    unsigned int iMask =0x00000010;
    
    unsigned int Result= 0;
    
    Result = iNo & iMask;
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
    
    printf("Enter your Number\n");
    scanf("%u",&iValue);
    
    bRet=CheckBit(iValue);
    if(bRet==true)
    {
        printf("Bit is On\n");
    }
    else
    {
        printf("5th Bit is Off\n");
    }
    return 0;
}

/*
                         
    0 0 0 0  0 0 0 0  0 0 1 1  0 1 1 0
 
     BIT IS ON..
      
    1 1 1 1  1 1 1 1  1 1 1 1  1 0 1 1
 --------------------------------------------
    0 0 0 0  0 0 0 0  0 0 1 1  0 0 1 0
*/

