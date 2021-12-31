//
//  Programme37.c
//  Input : 5 A
//  Output : A A A A A
//  Created by Ashutosh Vikhe on 10/03/21.
//
#include <stdio.h>
void Pattern(unsigned int ivalue,char cValue)
{
    int iCnt = 0;
    printf("\n");
    for(iCnt=1;iCnt<=ivalue;iCnt++)
    {
        printf("%c\t",cValue);
    }
    printf("\n");
}
int main()
{
    unsigned int iNo1 = 0;
    char cChar1 ='\0';
    printf("Enter The Number..\n");
    scanf("%u",&iNo1);
    printf("Enter Character..\n");
    scanf(" %c",&cChar1); //Character ghetani kayam space devun scanf lihayacha
    Pattern(iNo1,cChar1);
    return 0;
}
