//
//  Programme34.c
//  Input : 2
//  Output : * # * #
//  Created by Ashutosh Vikhe on 10/03/21.
// Accepts the number from user and display the * #

#include <stdio.h>
void Pattern(unsigned int ivalue)
{
    int iCnt = 0;
    printf("\n");
    for(iCnt= 1;iCnt<=ivalue;iCnt++)
    {
        printf("*\t#\t");
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

