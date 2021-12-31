//
//  Programme47.c
//  
//
//  Created by Ashutosh Vikhe on 15/03/21.

//  #
//  #    #
//  #    #    #
//  #    #    #    #
#include <stdio.h>
void Pattern(unsigned int iRow,unsigned int iCol)
{
    int i = 0;
    int j = 0;
    if(iRow!=iCol)
    {
        return;
    }
    printf("\n");
    for(i = 1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i>=j)
            {
                printf("#\t");
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




