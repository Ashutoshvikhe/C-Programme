//  Programme33.c
//  Created by Ashutosh Vikhe on 10/03/21.
//  Input : 5
//  Output : * * * * *
// The number from user and display the number of stars *
#include <stdio.h>
void Pattern(unsigned int ivalue)
{
    int iCnt = 0;
    printf("\n");
    for(iCnt= 1;iCnt<=ivalue;iCnt++)
    {
        printf("*\t");
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
