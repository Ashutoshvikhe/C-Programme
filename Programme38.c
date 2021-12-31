//
//  Programme38.c
//  
//
//  Created by Ashutosh Vikhe on 10/03/21.
//
//
#include <stdio.h>
void Pattern(unsigned int ivalue)
{
    int iCnt = 0;
    char ch = 'A';
    printf("\n");
    for(iCnt=1;iCnt<=ivalue;iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    printf("\n");
}
int main()
{
    unsigned int iNo1 = 0;
    char cChar1 ='\0';
    printf("Enter The Number..\n");
    scanf("%u",&iNo1);
    
    Pattern(iNo1);
    return 0;
}

