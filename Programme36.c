//
//  Programme36.c
//  Input : 3
//  Output : * 3 * 2 * 1
//  Created by Ashutosh Vikhe on 10/03/21.
//
#include <stdio.h>
void Pattern(unsigned int ivalue)
{
    int iCnt = 0;
    printf("\n");
    for(iCnt=ivalue;iCnt>=1;iCnt--)
    {
        printf("*\t%d\t",iCnt);
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


