// File Name : Programme7.c
// Function Name :CheckDivisible
// Input : Integer
// Output : Boolean(True/False)
// Decription : It is used to find out number divisible by 3 and 5
// Created by Ashutosh Vikhe on 01/03/21.
// Que : Accept the number from user and find whether the number is divisible by 3 and 5

#include <stdio.h>
#include <stdbool.h>
bool CheckDivisible(int iValue)
{
    if(((iValue % 3)== 0) && ((iValue % 5 ) == 0))
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
    
    bRet = CheckDivisible(iNo);
    if(bRet==true)
    {
        printf("%d is Divisible by 3 and 5..\n",iNo);
    }
    else
    {
        printf("%d is Not Divisible by 3 and 5..\n",iNo);
    }
    return 0;
}

