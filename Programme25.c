//
//  Programme25.c
//  
// Pallendrome Number 111 = 111(Reverse no kela  tari to same asayala hava
//
//  Created by Ashutosh Vikhe on 08/03/21.
// Accept the number from user and checknthe number where number is palnrome

#include <stdio.h>
#include <stdbool.h>
bool CheckPaallendrome (int iValue1)
{
    int iCnt = 0;
    int iDigits  = 0;
    int iTemp = 0;
    iTemp = iValue1; 
    if(iValue1 < 0)
    {
        iValue1 = -iValue1;
    }
    while(iValue1 > 0)
    {
        iDigits = iValue1 % 10;
        iCnt = (iCnt * 10) + iDigits;
        iValue1 = iValue1 / 10;
    }
    if(iCnt == iTemp)
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
    bool iRet ;
    printf("Enter the number \n");
    scanf("%d",&iNo1);
    iRet = CheckPallendrome(iNo1);
    if(iRet == true)
    {
        printf("The number is pallendrome\n");
        
    }
    else
    {
        printf("It is not a pallendrome number\n");
    }
    return 0;
}
