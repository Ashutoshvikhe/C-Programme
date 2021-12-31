//
//  Programme17.c
//  Input : 6
//  Output :True(1+2+3)
//  Created by Ashutosh Vikhe on 02/03/21.
// Que : Accepet the  number from user and check whether the number  perfect number or not
// Perfect number is the number whose addition of its factor is euqal to its its number for example: 6(1+2+3=6)

#include <stdio.h>
#include <stdbool.h>
bool FactorSum(int iValue)
{
    int iCnt = 0;
    int iSum = 0;
    if(iValue <= 0)
    {
        iValue = -iValue;
    }
    for(iCnt=1;iCnt<iValue;iCnt++)
    {
        if((iValue % iCnt)==0)
        {
            iSum =iSum+iCnt;
        }
    }
    if(iSum == iValue)
    {
        return true;
    }
    else
    {
        return false;
    }
   
}
//time complexity :O(N/2)
int main()
{
    int iNo1 =0 ;
    int iRet = 0;
    printf("Enter first Number..\n");
    scanf("%d",&iNo1);
    
    iRet=FactorSum(iNo1);
    if(iRet == true)
    {
        printf(" Is aperfect number");
    }
    else
    {
        printf("Is not a perfect number");
    }
   
    return 0;
}
