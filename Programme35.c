//
//  Programme35.c
//  
//
//  Created by Ashutosh Vikhe on 10/03/21.
//  Accept The Number from user  and display the pattern
//  1    *    2    *    3    *    4    *    5    *

#include <stdio.h>
void Pattern(unsigned int ivalue)
{
    int iCnt = 0;
    printf("\n");
    for(iCnt= 1;iCnt<=ivalue;iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
    printf("\n");
}
int main()
{
    unsigned int iNo1 = 0;
    printf("Enter The Number..\n");
    scanf("%u",&iNo1);
    
    Pattern(iNo1);
    return 0;
}

