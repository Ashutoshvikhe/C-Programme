 //
//  Programme24.c
//  
//
//  Created by Ashutosh Vikhe on 08/03/21.
// Que : Accept the number from user and reverse the number

#include <stdio.h>
int Reverse(int iValue1)
{
    int iCnt=0;
    int iDigits  = 0;
    if(iValue1 < 0)
    {
        iValue1 = -iValue1;
    }
    while(iValue1 > 0)
    {
        iDigits = iValue1 % 10;
        iCnt =(iCnt * 10) + iDigits; //This is the main step to reverse the digits
        iValue1 = iValue1 / 10;
    }
    return iCnt;
}
int main()
{
    int iNo1 = 0;
    int iRet = 0;
    printf("Enter the number..\n");
    scanf("%d",&iNo1);
    iRet =Reverse(iNo1);
    printf("Reverse Number is: %d\n",iRet);
    
    return 0;
}
