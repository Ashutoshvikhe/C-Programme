//
//  Programme86.c
//  
//
//  Created by Ashutosh Vikhe on 29/03/21.
// Accept the number from user and display that number in binary formate
 
#include <stdio.h>
void DisplayBinary(unsigned int iNo)
{
    unsigned int iDigits=0;
    while(iNo>0)
    {
        iDigits = iNo % 2;
        printf("%u\t",iDigits);
        iNo = iNo / 2;
    }
}
int main()
{
    unsigned int iValue = 0;
    
    printf("Enter your Number\n");
    scanf("%u",&iValue);
    
    DisplayBinary(iValue);
    return 0;
}

