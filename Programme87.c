//
//  Programme87.c
//  
//
// Created by Ashutosh Vikhe on 30/03/21.
// Accept the number from user and display the Count of 1 in it.

'

#include <stdio.h>
int CountOne(unsigned int iNo)
{
    unsigned int iDigits=0;
    int iCount= 0;
    while(iNo>0)
    {
        iDigits = iNo % 2;
        printf("%u\n",iDigits);
        if(iDigits==1)
        {
            iCount++;
        }
        iNo = iNo / 2;
        
    }
    return iCount;
}
int main()
{
    unsigned int iValue = 0;
    int iRet= 0;
    
    printf("Enter your Number\n");
    scanf("%u",&iValue);
    
    iRet=CountOne(iValue);
    printf("Count is:%d\n",iRet);
    return 0;
}

