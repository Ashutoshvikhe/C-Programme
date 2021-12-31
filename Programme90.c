//
//  Programme90.c
//  
///\\ Mask Designing \\

//  Created by Ashutosh Vikhe on 30/03/21.
//Accept the number from user and show the last third bit should make off

#include <stdio.h>
unsigned int OffBit(unsigned int iNo)
{
    unsigned int iMask =0xFFFFFFFB; //Hexadecimal
    unsigned int Result= 0;
    
    Result = iNo & iMask;
    
    return Result;
}
int main()
{
    unsigned int iValue = 0;
    int iRet= 0;
    
    printf("Enter your Number\n");
    scanf("%u",&iValue);
    
    iRet=OffBit(iValue);
    
    printf("Number after Updation:%d\n",iRet);
    return 0;
}
/*
          AND Operator
    0 0 0 0  0 0 0 0  0 0 1 1  0 1 1 0
      
    1 1 1 1  1 1 1 1  1 1 1 1  1 0 1 1
 --------------------------------------------
    0 0 0 0  0 0 0 0  0 0 1 1  0 0 1 0
*/

