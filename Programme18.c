// File Name : Programme18.c
// Function : Checkprime
// Input : 7
// Output : Is a prime number
// Created by Ashutosh Vikhe on 03/03/21.
// Que : Accept the number from user and find the number whether it is prime or not
//prime number is the number which is divide by only 1 and its own value for example :1,5

#include <stdio.h>
#include <stdbool.h>
bool CheckPrime(int iValue)
{
    int iCnt = 0;
    if(iValue <= 0)       //Filter to convert -ve number into +ve
    {
        iValue = -iValue;
    }
    for(iCnt=2; iCnt <= iValue/2 ;iCnt++)
    {
        if((iValue % iCnt)==0)
        {
            break;
        }
    }
    if(iCnt==(iValue/2)+1)       //IMP
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
    int iRet = 0;
    printf("Enter the Number...\n");
    scanf("%d",&iNo1);
    iRet=CheckPrime(iNo1);
    if(iRet == true)
    {
        printf(" Is a prime number\n");
    }
    else
    {
        printf("Is not a not a prime number\n");
    }
   
    return 0;
}
