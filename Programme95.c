//
//  Programme95.c
//  
//
//  Created by Ashutosh Vikhe on 31/03/21.
// Accept the number from user and 3rd 5th an 7th

#include <stdio.h>
#include <stdbool.h>
bool CheckBit(unsigned int iNo)
{
    unsigned int iMask =0x00000054;
    
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
        printf("3RD 5TH AND 7TH Bit is On\n");
    }
    else
    {
        printf("3RD 5TH and 7TH Bit is Off\n");
    }
    return 0;
}

/*
                         
    0 0 0 0  0 0 0 0  0 0 1 1  0 1 1 0
 
    Bit is OFF....
      
    1 1 1 1  1 1 1 1  1 1 1 1  1 0 1 1
 --------------------------------------------
    0 0 0 0  0 0 0 0  0 0 1 1  0 0 1 0
*/

