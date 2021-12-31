//
//  Programme93.c
//  
//
//  Created by Ashutosh Vikhe on 30/03/21.
// Accept the number from user and 3rd bit must toggle

#include <stdio.h>
unsigned int toggle(unsigned int iNo)
{
    unsigned int iMask =0x00000004;         //Hexadecimal
    
    unsigned int Result= 0;
    
    Result = iNo ^ iMask;
    
    return Result;
}
int main()
{
    unsigned int iValue = 0;
    int iRet= 0;
    
    printf("Enter your Number\n");
    scanf("%u",&iValue);
    
    iRet=toggle(iValue);
    
    printf("Number after Updation:%d\n",iRet);
    return 0;
}

/*
           OR Operator
    0 0 0 0  0 0 0 0  0 0 1 1  0 1 1 0
      
    1 1 1 1  1 1 1 1  1 1 1 1  1 0 1 1
 --------------------------------------------
    1 1 1 1  1 1 1 1  1 1 1 1  1 1 1 1
 
*/



