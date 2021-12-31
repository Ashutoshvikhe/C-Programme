//
//  Programme92.c
//  
//
//  Created by Ashutosh Vikhe on 30/03/21.

//  1111 1111 1111  1111  1111  1111   1011   1011
//   F     F    F     F     F     F      B      B


// 3rd  and 7th bit off kelet
//Accept the number from user and OFF 3rd and 7th BIT
                                 -----
#include <stdio.h>
unsigned int OffBit(unsigned int iNo)
{
    unsigned int iMask =0xFFFFFFBB;         //Hexadecimal
    
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


