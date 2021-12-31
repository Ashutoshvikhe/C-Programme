//
//  Programe27.c
//  
//
//  Created by Ashutosh Vikhe on 08/03/21.
// Accept the number from user and Display the smallest number 

#include <stdio.h>
int MinDigits(int iValue1)
{
    int iMin = 9;
    int iDigits  = 0;
    if(iValue1 < 0)
    {
        iValue1 = -iValue1;
    }
   while(iValue1 > 0)
   {
       iDigits = iValue1 % 10;
       if(iDigits < iMin)
       {
           iMin = iDigits;
           if(iMin == 0)
           {
               break;
           }
       }
       iValue1 = iValue1 / 10;
   }
    return iMin;
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;
    printf("Enter the number..\n");
    scanf("%d",&iNo1);
    iRet = MinDigits(iNo1);
    printf("Minimum Digits is : %d\n",iRet);
    
    return 0;
}
