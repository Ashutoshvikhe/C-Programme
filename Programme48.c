//
//  Programme48.c
//  
//
//  Created by Ashutosh Vikhe on 15/03/21.
//  A
//  A    B
//  A    B    C
//  A    B    C    D

#include <stdio.h>
void Pattern(unsigned int iRow,unsigned int iCol)
{
    int i = 0;
    int j = 0;
    char h = '\0';
    printf("\n");
    for(i = 1;i<=iRow;i++)
    {
        for(j=1,h='A';j<=iCol;j++,h++)
        {
            if(i>=j)
            {
                printf("%c\t",h);
            }
        }
        printf("\n");
    }
}
int main()
{
    unsigned int iNo1 = 0;
    unsigned int iNo2 = 0;
    
    printf("Enter The Rows..\n");
    scanf("%u",&iNo1);
    printf("Enter The Coloumn..\n");
    scanf("%u",&iNo2);
    Pattern(iNo1,iNo2);
    return 0;
}




