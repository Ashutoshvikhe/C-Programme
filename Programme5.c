// File Name : Programme5.c
//Function Name :CheckEven
// Input : Integer
// Output : Boolean(True/False)
// Decription : It is used to find out even and odd number
// Created by Ashutosh Vikhe on 01/03/21.
// Que : Accept the number from user and find whether the number is even OR odd

#include <stdio.h>
#include <stdbool.h>
bool CheckEven(int iValue)
{
    if((iValue % 2 ) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iNo = 0;
    bool bRet = 0;
    
    printf("Enter First Number..\n");
    scanf("%d",&iNo);
    
    bRet =CheckEven(iNo);
    if(bRet==true)
    {
        printf("%d is Even number..\n",iNo);
    }
    else
    {
        printf("%d is Odd number..\n",iNo);
    }
    return 0;
}
