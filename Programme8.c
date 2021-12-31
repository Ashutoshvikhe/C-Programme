// File Name : Programme8.c
// Function :CheckDivisible
// Input :8,2
// Output :8 Divisible by 2
// Input :9,2
// Output :9 is Not Divisible by 2
// Created by Ashutosh Vikhe on 01/03/21.
// Decription : It is used to divide 2nd number by  first number
// Que :Accepet two number from user and divide First number by Second number

#include <stdio.h>
#include <stdbool.h>
bool CheckDivisible(int iValue1,int iValue2)
{
    if((iValue1 % iValue2) == 0)
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
    int iNo1 = 0;
    int iNo2 = 0;
    bool bRet = 0;
    
    printf("Enter First Number..\n");
    scanf("%d",&iNo1);
    printf("Enter Second Number..\n");
    scanf("%d",&iNo2);
    
    bRet = CheckDivisible(iNo1,iNo2);
    if(bRet == true)
    {
        printf("%d is Divisible by %d..\n",iNo1,iNo2);
    }
    else
    {
        printf("%d is Not Divisible by %d..\n",iNo1,iNo2);
    }
    return 0;
}


