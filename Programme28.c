//
//  Programme28.c
//  
//
//  Created by Ashutosh Vikhe on 09/03/21.
// Accept the number from user and Display the largest Digits in that number
#include <stdio.h>
int MaxDigits(int iValue1)
{
    int iMax = 0;
    int iDigits  = 0;
    if(iValue1 < 0)
    {
        iValue1 = -iValue1;
    }
   while(iValue1 > 0)
   {
       iDigits = iValue1 % 10;
       if(iDigits > iMax)
       {
           iMax = iDigits;
           if(iMax == 9)
           {
               break;
           }
       }
       iValue1 = iValue1 / 10;
   }
    return iMax;
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;
    printf("Enter the number..\n");
    scanf("%d",&iNo1);
    iRet = MaxDigits(iNo1);
    printf("Maximum Digits is : %d\n",iRet);
    
    return 0;
}
