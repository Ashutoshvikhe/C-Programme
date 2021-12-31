// File name :Programme2.c
// Function : Maximum And Minimum Number Finder
// Input : Integer, Integer
// Output : Integer
// Created by Ashutosh Vikhe on 23/02/21.
// Decription :


//QUE : Accepet two number from user and return maximum and minimum number

#include "Header2.h"

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;
    
    printf("Enter first Number..\n");
    scanf("%d",&iNo1);
    
    printf("Enter Second Number..\n");
    scanf("%d",&iNo2);
    
    iRet = Minimum (iNo1,iNo2);
    
    printf("Maximum Number is :%d\n",iRet);
    return 0;
}
