//
//  Programme16.c
//  Input : 6
// Output : (6) 1+2+3
//  Created by Ashutosh Vikhe on 02/03/21.
// Que : Accepet the number from user and return the addition of its factor

#include <stdio.h>
int FactorSum(int iValue)
{
    int iCnt = 0;
    int iSum = 0;
    if(iValue <= 0)
    {
        iValue = -iValue;
    }
    for(iCnt=1;iCnt<=iValue/2;iCnt++)          //time complexity :O(N/2)
    {
        if(iValue % iCnt==0)
        {
            iSum =iSum+iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iNo1 =0 ;
    int iRet = 0;
    printf("Enter first Number..\n");
    scanf("%d",&iNo1);
    
    iRet=FactorSum(iNo1);
    printf("Addition is :%d\n",iNo1);
   
    return 0;
}
